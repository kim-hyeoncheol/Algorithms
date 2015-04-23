/*
 * 10156 - 과자
 * https://www.acmicpc.net/problem/10156
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	K, N, M;
	while (cin >> K >> N >> M) {
		if (K * N <= M)	cout << 0 << endl;
		else cout << K * N - M << endl;
	}
    return 0;
}


