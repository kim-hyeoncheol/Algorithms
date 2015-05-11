/*
 * 2845 - 파티가 끝나고 난 뒤
 * https://www.acmicpc.net/problem/2845
 * Run Time : 0 MS
 *
 * 산수.
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int L, P, i;
    cin >> L >> P;
    L *= P;
    for (i = 0; i < 5; i++) {
        cin >> P;
        cout << P - L << " ";
    }
    cout << endl;
    return 0;
}


