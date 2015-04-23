/*
 * 10101 - 삼각형 외우기
 * https://www.acmicpc.net/problem/10101
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	a, b, c;
	while (cin >> a >> b >> c) {
		if (a + b + c != 180)	cout << "Error" << endl;
		else {
			if (a == b && a == c)	cout << "Equilateral" << endl;
			else if (a == b || b == c || a == c)	cout << "Isosceles" << endl;
			else	cout << "Scalene" << endl;
		}
	}
    return 0;
}


