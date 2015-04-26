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

int main(int argc, char* argv[]) {
	map<ULL, ULL>	item;
	ULL	val[50000], cnt[50000], size;
	map<ULL, ULL>::iterator a, c;
	ULL i, j, n, total;
	while (cin >> n) {
		total = 0;
		for (i = 1; i < n; i++) item[i * i % n]++;
		size = 0;
		for (a = item.begin(); a != item.end(); a++) {
			val[size] = a->first;
			cnt[size] = a->second;
			size++;
		}
		for (i = 0; i < size; i++) {
			c = item.find((val[i] << 1) % n);
			if (c != item.end()) {
				// nH2 = (((n + 1) * n) / 2)
				total += (((cnt[i] + 1) * cnt[i]) >> 1) * c->second;
			}
			for (j = i + 1; j < size; j++) {
				c = item.find((val[i] + val[j]) % n);
				if (c != item.end()) {
					total += cnt[i] * cnt[j] * c->second;
				}
			}
		}
		cout << total << endl;
		item.clear();
	}
	return 0;
}


