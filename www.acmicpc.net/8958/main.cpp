/*
 * 8958 - OX퀴즈
 * https://www.acmicpc.net/problem/8958
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	T, i, cur, sum;
	string	in;
	for (cin >> T; T; T--) {
		cin >> in;
		cur = sum = 0;
		for (i = 0; i < in.size(); i++) {
			if (in[i] == 'O') {
				cur++;
				sum += cur;
			} else {
				cur = 0;
			}
		}
		cout << sum << endl;
	}
    return 0;
}


