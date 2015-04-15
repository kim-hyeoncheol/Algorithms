/*
 * 1157 - 단어 공부
 * https://www.acmicpc.net/problem/1157
 * Run Time : Time Out
 */
#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char* argv[]) {
	int	alpha[26], max, max_i, dup, i;
	char	in;
	for (i = 0; i < 26; i++)	alpha[i] = 0;
	while (scanf("%c", &in)) {
		if (!isalpha(in))	break;
		if (isupper(in))	alpha[in - 'A']++;
		else				alpha[in - 'a']++;
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


