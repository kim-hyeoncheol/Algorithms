/*
 * 5051 - 피타고라스의 정리
 * https://www.acmicpc.net/problem/5051
 * Run Time : Time Out
 * 그냥 풀면 Time Out 날 게 뻔하고...
 * 정수론, 순열, 조합
 * 중복 조합 nHr = n+r-1Cr
 */
#include <iostream>
#include <algorithm>
#include <map>

typedef unsigned long long	ULL;

using namespace std;

ULL nCr(ULL n, ULL r) {
	ULL ret = 1, i;
	for (i = 0; i < r; i++)	ret *= (n - i);
	for (i = 2; i <= r; i++)	ret /= i;
	return ret;
}

ULL nHr(ULL n, ULL r) {
	return nCr(n + r - 1, r);
}

int main(int argc, char* argv[]) {
	map<ULL, ULL>	item;
	map<ULL, ULL>::iterator a, b, c;
	ULL i, n, cnt;
	while (cin >> n) {
		cnt = 0;
		for (i = 1; i < n; i++) item[i * i % n]++;
		for (a = item.begin(); a != item.end(); a++)
			for (b = a; b != item.end(); b++) {
				c = item.find((a->first + b->first) % n);
				if (c != item.end()) {
					if (a == b) {
						cnt += nHr(a->second, 2) * c->second;
					}
					else {
						cnt += a->second * b->second * c->second;
					}
				}
			}
		cout << cnt << endl;
		item.clear();
	}
	return 0;
}


