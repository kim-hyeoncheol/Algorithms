/*
 * 195 - Anagram
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=131
 * Run Time : 0.092
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool Compare(const char& lhs, char& rhs)
{
	if(tolower(lhs) == tolower(rhs)) {
		return lhs < rhs;
	}
	return tolower(lhs) < tolower(rhs);
}


int main(int argc, char* argv[]) {
    int n;
    string  input;
    for (cin >> n; n > 0; n--) {
    	cin >> input;
    	sort(input.begin(), input.end(), Compare);
    	do {
    		cout << input << endl;
		} while (next_permutation(input.begin(), input.end(), Compare));
	}
    return 0;
}


