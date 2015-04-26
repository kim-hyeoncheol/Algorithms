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

using namespace std;

int nCr(int n, int r) {
	int	ret = 1, i;
	for (i = r + 1; i <= n; i++)	ret *= i;
	for (i = 2; i <= n - r; i++)	ret /= i;
	return ret;
}

int nHr(int n, int r) {
	return nCr(n + r - 1, r);
}

int main(int argc, char* argv[]) {
	map<long long, int>	item;
	map<long long, int>::iterator a, b, c;
	long long i, n, cnt;
	while (cin >> n) {
		cnt = 0;
		for (i = 1; i < n; i++) item[i * i % n]++;
		for (a = item.begin(); a != item.end(); a++)
			for (b = a; b != item.end(); b++)
				for (c = item.begin(); c != item.end(); c++)
					if ((a->first + b->first - c->first) % n == 0) {
						if (a->first == b->first) {
							cnt += nHr(a->second, 2) * c->second;
						}
						else {
							cnt += a->second * b->second * c->second;
						}
					}
		cout << cnt << endl;
		item.clear();
	}

	return 0;
}


