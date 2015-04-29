/*
 * 5789 - 한다 안한다
 * https://www.acmicpc.net/problem/5789
 * Run Time : 8 MS
 */
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    int n, i;
    string  str;
    for (cin >> n; n; n--) {
        cin >> str;
        i = str.size() / 2;
        cout << "Do-it";
        if (str[i-1] != str[i]) cout << "-Not";
        cout << endl;
    }
    return 0;
}


