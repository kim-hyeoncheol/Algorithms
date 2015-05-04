//==========================================================================
// Name        : 1251 - 단어 나누기
// Problem     : https://www.acmicpc.net/problem/1251
// Author      : Kim, Hyeon-Cheol
// Run Time    : 0 MS
// Description : 문자열 
//==========================================================================

#include <iostream>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

string	str;

string rearrange(int first, int second) {
	string  ret = str;
	int	i;

	for (i = 0; i < first; i++)
		ret[i] = str[first - i - 1];
	for (i = 0; first + i < second; i++)
		ret[first + i] = str[second - i - 1];
	for (i = 0; second + i < str.size(); i++)
		ret[second + i] = str[str.size() - i - 1];
	return ret;
}

int main() {
	int	i, j;
	set<string>	word;

	cin >> str;
	for (i = 1; i < str.size() - 1; i++)
		for (j = i + 1; j < str.size(); j++)
			word.insert(rearrange(i, j));
	cout << *(word.begin()) << endl;
	return 0;
}
