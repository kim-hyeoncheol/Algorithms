/*
 * 10808 - 알파벳 개수
 * https://www.acmicpc.net/problem/10808
 * Run Time : 0
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	int count[26];
	int i;
    string  input;
    while (cin >> input) {
		for (i = 0; i < 26; i++) count[i] = 0;
		for (i = 0; i < input.length(); i++) {
			count[input[i] - 'a']++;
		}
		cout << count[0];
		for (i = 1; i < 26; i++)
			cout << " " << count[i];
		cout << endl;
	}
    return 0;
}


