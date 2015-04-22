/*
 * 2711 - 오타맨 고창영
 * https://www.acmicpc.net/problem/2711
 * Run Time : 0 MS
 * substr()
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	T, P;
	string	str;
	for (cin >> T; T; T--) {
		cin >> P >> str;
		cout << str.substr(0, P-1) << str.substr(P) << endl;
	}
    return 0;
}


