/*
 * 3003 - 킹, 퀸, 룩, 비숍, 나이트, 폰
 * https://www.acmicpc.net/problem/3003
 * Run Time : 0 MS
 * 덧셈, 뺄셈
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	org[6] = { 1, 1, 2, 2, 2, 8 }, num, i;
	for (i = 0; i < 6; i++) {
		cin >> num;
		cout << org[i] - num << " ";
	}
	cout << endl;
    return 0;
}


