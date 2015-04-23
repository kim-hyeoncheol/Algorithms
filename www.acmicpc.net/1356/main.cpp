/*
 * 1356 - 유진수
 * https://www.acmicpc.net/problem/1356
 * Run Time : 0 MS
 * 0 이 있을 수 있다.
 */
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	string	num;
	int	i, j;
	long long	left, right;
	bool	is_yujin;
	while (cin >> num) {
		is_yujin = false;
		for (i = 1; !is_yujin && i < num.size(); i++) {
			left = right = 1;
			for (j = 0; j < i; j++)	left *= num[j] - '0';
			for (j = i; j < num.size(); j++)	right *= num[j] - '0';
			if (left == right) is_yujin = true;
		}
		cout << (is_yujin ? "YES" : "NO") << endl;
	}
    return 0;
}


