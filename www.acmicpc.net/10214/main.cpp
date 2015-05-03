/*
 * 10214 - Baseball
 * https://www.acmicpc.net/problem/10214
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int T, Y, K, sumY, sumK, i;
    for (cin >> T; T; T--) {
        sumY = sumK = 0;
        for (i = 0; i < 9; i++) {
            cin >> Y >> K;
            sumY += Y;
            sumK += K;
        }
        if (sumY > sumK)    cout << "Yonsei" << endl;
        else if (sumY < sumK)   cout << "Korea" << endl;
        else    cout << "Draw" << endl;
    }
    return 0;
}


