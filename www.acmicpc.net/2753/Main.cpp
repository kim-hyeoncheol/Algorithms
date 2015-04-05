/*
 * 2753 - 윤년
 * https://www.acmicpc.net/problem/2753
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	N;
	cin >> N;

	if (N % 400 == 0)	cout << 1 << endl;
	else if (N % 100 != 0 && N % 4 == 0)	cout << 1 << endl;
	else cout << 0 << endl;
    return 0;
}


