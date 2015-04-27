/*
 * 10162 - 전자레인지
 * https://www.acmicpc.net/problem/10162
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int T;
    while (cin >> T) {
        if (T % 10)    cout << -1 << endl;
        else {
            cout << T / 300;
            T %= 300;
            cout << " " << T / 60;
            T %= 60;
            cout << " " << T / 10 << endl;;
        }
    }
    return 0;
}


