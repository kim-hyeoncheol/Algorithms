/*
 * 5051 - 피타고라스의 정리
 * https://www.acmicpc.net/problem/5051
 * Run Time : Time Out
 * 그냥 풀면 Time Out 날 게 뻔하고...
 * 정수론, 순열, 조합
 * 중복 조합 nHr = n+r-1Cr
 * 중국인의 나머지 정리
 */
#include <iostream>

typedef unsigned long long	ULL;

using namespace std;

ULL item[500000], idx[500000], size, N;

void init_item(ULL n) {
	ULL	i;
	for (i = 0; i < n; i++)	item[i] = 0;
	for (i = 0; i < n; i++)	item[i * i % n]++;
	for (size = i = 0; i < n; i++)
		if (item[i])	idx[size++] = i;
}

// # of solutions (a, b, c) to a^2 + b^2 = c^2 (mod p^e)
ULL solution_of_power(ULL p, ULL e) {
	ULL ret = 0, P = 1, i, j;
	for (i = 0; i < e; i++)	P *= p;
	init_item(P);

	// (a, b), (b, a)
	for (i = 0; i < P; i++)
		ret += item[i] * item[(i + 1) % P];
	for (j = i = 0; i < P; ) {
		ret += item[(j + 1) % P];
		i += p;
		j = i * i % P;
	}
	ret *= P / p * (p - 1);

	// p^3
	if (e > 1)	ret += solution_of_power(p, e - 2) * p * p * p;
	else	ret++;
	
	return ret;
}

// # of solutions (a, b, c) to a^2 + b^2 = c^2 (mod n); a = 0 or b = 0 or c = 0
ULL solution_of_zero(ULL n) {
	ULL ret = 1 + 3 * item[0], i;
	for (i = 0; i < n; i++)
		ret += item[i] * (2 * item[i] + item[(n - i) % n]);
	return ret;
}

// # of solutions (a, b, c) to a^2 + b^2 = c^2 (mod n); a = b and a != 0 b != 0 and c != 0
ULL solution_of_isosceles(ULL n) {
	ULL	ret = 0, i;
	for (i = 1; i < n; i++)
		ret += item[2 * i * i % n];
	return ret;
}

int main(int argc, char* argv[]) {
	ULL n, total, e, p;

	while (cin >> n) {
		total = 1;
		N = n;
		for (e = 0; n >= 2 && n % 2 == 0; e++)	n /= 2;
		if (e) total *= solution_of_power(2, e);
		for (p = 3; p * p <= n; p += 2) {
			for (e = 0; n % p == 0; e++)	n /= p;
			if (e) total *= solution_of_power(p, e);
		}
		if (n > 1) total *= solution_of_power(n, 1);

		init_item(N);
		item[0]--;
		total -= solution_of_zero(N);
		total += solution_of_isosceles(N);
		cout << total / 2 << endl;
	}
	return 0;
}

