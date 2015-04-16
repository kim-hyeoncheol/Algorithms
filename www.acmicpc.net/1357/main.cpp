/*
 * 1357 - 뒤집힌 덧셈
 * https://www.acmicpc.net/problem/1357
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int rev(int Z) {
	int result = 0;
	while (Z) {
		result = result * 10 + Z % 10;
		Z /= 10;
	}
	return result;
}

int main(int argc, char* argv[]) {
	int	X, Y;
	cin >> X >> Y;
	cout << rev(rev(X) + rev(Y)) << endl;
    return 0;
}


