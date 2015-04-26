/*
 * 5051 - 피타고라스의 정리
 * https://www.acmicpc.net/problem/5051
 * Run Time : 40 MS
 *
 * 문제 풀이 자체는 쉬웠으나, Time Out 을 벗어나는게 무척 어려웠다.
 * 1 초 이내에 해결하기 위해서는 중국인의 나머지 정리가 필요하다.
 *
 * 그냥 풀면 Time Out 날 게 뻔하고...
 * 정수론, 순열, 조합
 * 중복 조합 nHr = n+r-1Cr
 * 중국인의 나머지 정리 <=== Key Point!!!
 *
 * 정수론 (김응태, 박승안 저)
 */
#include <iostream>

typedef unsigned long long	ULL;

using namespace std;

ULL item[500000], idx[500000], size;

void init_item(ULL n, ULL start) {
	ULL	i;
	for (i = 0; i < n; i++)	item[i] = 0;
	for (i = start; i < n; i++)	item[i * i % n]++;
	for (size = i = 0; i < n; i++)
		if (item[i])	idx[size++] = i;
}

/*
 * step1-sub: Sk
 *
 * # of solutions (a, b, c) to a^2 + b^2 = c^2 (mod p^e), a, b, c >= 0 인 정수
 */
ULL solution_of_factors(ULL p, ULL e) {
	ULL ret = 0, P = 1, i, a, b;
	for (i = 0; i < e; i++)	P *= p;	// P = p^e
	init_item(P, 0);
	for (i = 0; i < size; i++) {
		a = idx[i];
		b = (a + 1) % P;
		if (item[a] && item[b]) ret += item[a] * item[b];
	}
	for (i = 0; i < P; i += p) {
		a = (i * i + 1) % P;
		if (item[a]) ret += item[a];
	}
	ret *= P * (p - 1) / p;
	ret += (e > 1) ? solution_of_factors(p, e - 2) * p * p * p : 1;
	return ret;
}

/*
 * step1: n = p1^e1 * p2^e2 * ... * pk^ek 일 때,
 * Sn = # of (a, b, c) to a^2 + b^2 = c^2 (mod n) 이라하면,
 * Sn = S1 * S2 * ... * Sk
 *
 * # of solutions (a, b, c) to a^2 + b^2 = c^2 (mod n), a, b, c >= 0 인 정수
 */
ULL solution_of_common(ULL n) {
	ULL ret = 1, e, p;
	for (e = 0; n >= 2 && n % 2 == 0; e++)	n /= 2;
	if (e) ret *= solution_of_factors(2, e);
	for (p = 3; p * p <= n; p += 2) {
		for (e = 0; n % p == 0; e++)	n /= p;
		if (e) ret *= solution_of_factors(p, e);
	}
	if (n > 1) ret *= solution_of_factors(n, 1);
	return ret;
}

/*
 * step2: step1 에 포함된 a = 0 or b = 0 or c = 0 인 해를 모두 빼준다.
 * # of solutions (a, b, c) to a^2 + b^2 = c^2 (mod n); a = 0 or b = 0 or c = 0
 */
ULL solution_of_zeros(ULL n) {
	ULL ret = 1 + 3 * item[0], i, a, b;
	for (i = 0; i < size; i++) {
		a = idx[i];
		b = (n - a) % n;
		ret += item[a] * (item[a] + item[a] + item[b]);
	}
	return ret;
}

/*
 * step3: a = b
 * step1, step2 에서는 a, b 값의 크기에 상관없이 계산했다.
 * 그래서 a <= b 인 조건을 만족하려면 / 2 를 해야 하는데
 * a = b 인 경우는 한 번씩만 더해졌으므로 한 번씩 더해 준다.
 * # of solutions (a, b, c) to a^2 + b^2 = c^2 (mod n); a = b and a != 0 b != 0 and c != 0
 */
ULL solution_of_isosceles(ULL n) {
	ULL ret = 0, i, a, c;

	for (i = 0; i < size; i++) {
		a = idx[i];
		c = (a + a) % n;
		ret += item[a] * item[c];
	}
	return ret;
}

int main(int argc, char* argv[]) {
	ULL n, total;
	while (cin >> n) {
		total = solution_of_common(n);
		init_item(n, 1);
		total -= solution_of_zeros(n);
		total += solution_of_isosceles(n);
		// step4 : 모두 a, b 순서없이 세었으므로 2로 나누어 a <= b 인 경우만 남긴다.
		cout << total / 2 << endl;
	}
	return 0;
}

