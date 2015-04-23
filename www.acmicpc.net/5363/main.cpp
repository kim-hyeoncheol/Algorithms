/*
 * 5363 - 요다
 * https://www.acmicpc.net/problem/5363
 * Run Time : 0 MS
 */
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(int argc, char* argv[]) {
	int	N, i, j, cnt;
	char	str[100];
	cin >> N;
	cin.getline(str, 100);
	for (; N; N--) {
		cin.getline(str, 100);
		for (cnt = i = 0; i < strlen(str); i++) {
			if (str[i] == ' ')	cnt++;
			if (cnt == 2)	break;
		}
		for (j = i + 1; j < strlen(str); j++)	cout << str[j];
		cout << " ";
		for (j = 0; j < i; j++)	cout << str[j];
		cout << endl;

	}
    return 0;
}


