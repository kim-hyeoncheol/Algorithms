/*
 * 9086 - 문자열
 * https://www.acmicpc.net/problem/9086
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	T;
	string str;
	for (cin >> T; T; T--) {
		cin >> str;
		cout << str[0] << str[str.size() - 1] << endl;
	}
    return 0;
}


