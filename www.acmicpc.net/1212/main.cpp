/*
 * 1212 - 8진수 2진수
 * https://www.acmicpc.net/problem/1212
 * Run Time : 
 */
#include <iostream>

using namespace std;

string get_binary(int c) {
    switch (c) {
        case 0:
            return "000";
        case 1:
            return "001";
        case 2:
            return "010";
        case 3:
            return "011";
        case 4:
            return "100";
        case 5:
            return "101";
        case 6:
            return "110";
        case 7:
            return "111";
    }
    return "";
}

void print_result(string s) {
    int i;
    for (i = 0; i < s.size(); i++)
        if (s[i] != '0')    break;
    if (i == s.size())  cout << 0 << endl;
    else {
        for (; i < s.size(); i++)
            cout << s[i];
        cout << endl;
    }
}

int main(int argc, char* argv[]) {
    string  str, result;
    while (cin >> str) {
        result = "";
        for (int i = 0; i < str.size(); i++)
            result += get_binary(str[i] - '0');
        print_result(result);
	}
    return 0;
}


