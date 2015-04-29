/*
 * 4493 - 가위 바위 보?
 * https://www.acmicpc.net/problem/4493
 * Run Time : 20 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int t, n, p1, p2;
    char g1, g2;
    for (cin >> t; t; t--) {
        p1 = p2 = 0;
        for (cin >> n; n; n--) {
            cin >> g1 >> g2;
            if (g1 == 'R') {
                if (g2 == 'P')  p2++;
                else if (g2 == 'S') p1++;
            } else if (g1 == 'P') {
                if (g2 == 'R')  p1++;
                else if (g2 == 'S') p2++;
            } else if (g1 == 'S') {
                if (g2 == 'R')  p2++;
                else if (g2 == 'P') p1++;
            }
        }
        if (p1 > p2)    cout << "Player 1" << endl;
        else if (p1 < p2)   cout << "Player 2" << endl;
        else cout << "TIE" << endl;
    }
    return 0;
}


