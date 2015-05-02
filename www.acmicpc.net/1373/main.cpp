/*
 * 1373 - 2진수 8진수
 * https://www.acmicpc.net/problem/1373
 * Run Time : 112 MS
 */
#include <iostream>
#include <string>

using namespace std;

int oct(string str) {
    int ret = 0, i;
    for (i = 0; i < str.size(); i++)
        ret = ret * 2 + str[i] - '0';
    return ret;
}

int main(int argc, char* argv[]) {
    int len, i;
    string  str;

    cin >> str;
    len = str.size();

    if (len % 3) cout << oct(str.substr(0, len % 3));
    for (i = len % 3; i < len; i += 3)
        cout << oct(str.substr(i, 3));
    cout << endl;
    return 0;
}


