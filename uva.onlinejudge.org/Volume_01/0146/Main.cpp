/*
 * 146 - ID Codes
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=82
 * Run Time : 0.000
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;


int main(int argc, char* argv[]) {
	int alphabet[26];
	int max_alphabet, cur_alphabet;
	int i, j, len;
    string  str;

    while (cin >> str) {
		if (str == "#")	break;

		for (i = 0; i < 26; i++) alphabet[i] = 0;
		max_alphabet = 0;

		len = str.length();
		for (i = len - 1; i >= 0; i--) {
			cur_alphabet = str[i] - 'a';
			if (max_alphabet < cur_alphabet) max_alphabet = cur_alphabet;
			alphabet[cur_alphabet]++;
			if (cur_alphabet < max_alphabet) {
				cout << str.substr(0, i);
				for (j = cur_alphabet + 1; j < 26; j++) {
					if (alphabet[j] > 0) {
						cout << (char)(j + 'a');
						alphabet[j]--;
						break;
					}
				}
				break;
			}
		}
		if (i < 0) {
			cout << "No Successor" << endl;
		} else {
			for (i = 0; i < 26; i++) {
				while (alphabet[i] > 0) {
					cout << (char)(i + 'a');
					alphabet[i]--;
				}
			}
			cout << endl;
		}
	}
    return 0;
}


