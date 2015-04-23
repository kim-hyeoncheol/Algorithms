/*
 * 2884 - 알람 시계
 * https://www.acmicpc.net/problem/2884
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	H, M;
	cin >> H >> M;
	M -= 45;
	if (M < 0) {
		M += 60;
		H--;
	}
	if (H < 0)	H += 24;
	cout << H << " " << M << endl;
    return 0;
}


