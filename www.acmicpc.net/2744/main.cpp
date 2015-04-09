/*
 * 2744 - 대소문자 바꾸기
 * https://www.acmicpc.net/problem/2744
 * Run Time : 
 */
#include <iostream>
#include <cctype>

using namespace std;

int main(int argc, char* argv[]) {
    int i;
    string  str;
    char    c;
    while (cin >> str) {
        for (i = 0; i < str.size(); i++) {
            c = islower(str[i]) ? toupper(str[i]) : tolower(str[i]);
            cout << c;
        }
        cout << endl;
	}
    return 0;
}


