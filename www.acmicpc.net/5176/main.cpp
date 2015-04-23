/*
 * 5176 - 대회 자리
 * https://www.acmicpc.net/problem/5176
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	K, P, M, pos[501], total, i, j;
	for (cin >> K; K; K--) {
		cin >> P >> M;
		for (i = 1; i <= M; i++)	pos[i] = 0;
		for (i = 1; i <= P; i++) {
			cin >> j;
			pos[j]++;
		}
		total = 0;
		for (i = 1; i <= M; i++) {
			if (pos[i] > 0)
				total += pos[i] - 1;
		}
		cout << total << endl;
	}
    return 0;
}


