/*
 * 1157 - 단어 공부
 * https://www.acmicpc.net/problem/1157
 * Run Time : 68 MS
 * 100만자의 문자열도 한 번에 입력받는게 빠르다.
 */
#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char* argv[]) {
	int	alpha[26], max, max_i, dup, i;
	string	in;
	cin >> in;
	for (i = 0; i < 26; i++)	alpha[i] = 0;
	for (i = 0; i < in.size(); i++) {
		if (!isalpha(in[i]))	break;
		if (isupper(in[i]))	alpha[in[i] - 'A']++;
		else				alpha[in[i] - 'a']++;
	}

	for (dup = max = i = 0; i < 26; i++) {
		if (max < alpha[i]) {
			max = alpha[i];
			max_i = i;
			dup = 0;
		} else if (max == alpha[i])
			dup++;
	}
	printf("%c\n", (dup > 0) ? '?' : 'A' + max_i);
    return 0;
}


