/*
 * 5051 - 피타고라스의 정리
 * https://www.acmicpc.net/problem/5051
 * Run Time : Time Out
 * 그냥 풀면 Time Out 날 게 뻔하고...
 * 정수론, 순열, 조합
 * 중복 조합 nHr = n+r-1Cr
 */
#include <iostream>

typedef unsigned long long	ULL;

using namespace std;

ULL item[500000], idx[500000];

int main(int argc, char* argv[]) {
	ULL n, total, i, j, k, l, m, size;

	while (cin >> n) {

		total = 0;
		for (i = 0; i < n; i++)	item[i] = 0;
		for (i = 1; i < n; i++)	item[i * i % n]++;
		for (size = i = 0; i < n; i++)
			if (item[i])	idx[size++] = i;

		for (i = 0; i < size; i++) {
			// a == b
			k = idx[i];
			m = (k << 1);
			if (m >= n)	m -= n;
			if (item[m])
				total += (((item[k] + 1) * item[k]) >> 1) * item[m];
			// a != b
			for (j = i + 1; j < size; j++) {
				l = idx[j];
				m = (k + l);
				if (m >= n)	m -= n;
				if (item[m]) total += item[k] * item[l] * item[m];
			}
		}
		cout << total << endl;
	}
	return 0;
}

