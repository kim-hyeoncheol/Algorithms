/*
 * 1316 - 그룹 단어 체커
 * https://www.acmicpc.net/problem/1316
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	alpha[26], N, cnt = 0, i;
	string word;
	for (cin >> N; N; N--) {
		cin >> word;
		for (i = 0; i < 26; i++)	alpha[i] = 0;
		alpha[word[0] - 'a']++;
		for (i = 1; i < word.size(); i++) {
			if (word[i] != word[i - 1])	alpha[word[i] - 'a']++;
		}
		for (i = 0; i < 26; i++)
			if (alpha[i] > 1)	break;
		if (i == 26)	cnt++;
	}
	cout << cnt << endl;
    return 0;
}


