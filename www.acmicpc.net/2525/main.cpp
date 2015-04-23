/**
 * 2525 - 오븐 시계
 * https://www.acmicpc.net/problem/2525
 * Run Time : 0 MS
 * 시각 구하기.
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	H, M, D, total, day = 24 * 60;
	while (cin >> H >> M >> D) {
		total = (60 * H + M + D) % day;
		H = total / 60;
		M = total %= 60;
		cout << H << " " << M << endl;
	}
    return 0;
}
