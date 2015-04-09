/*
 * 9325 - 얼마?
 * https://www.acmicpc.net/problem/9325
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int T, n, s, q, p;
    for (cin >> T; T; T--) {
        cin >> s;
        for (cin >> n; n; n--) {
            cin >> q >> p;
            s += q * p;
        }
        cout << s << endl;
    }
    return 0;
}


