/*
 * 2720 - 세탁소 사장 동혁
 * https://www.acmicpc.net/problem/2720
 * Run Time : 4 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int T, C;
    for (cin >> T; T; T--) {
        cin >> C;
        cout << C / 25;
        C %= 25;
        cout << " " << C / 10;
        C %= 10;
        cout << " " << C / 5;
        C %= 5;
        cout << " " << C << endl;
    }
    return 0;
}


