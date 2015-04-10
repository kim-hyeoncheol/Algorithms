/*
 * 1002 - 터렛
 * https://www.acmicpc.net/problem/1002
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int T;
    int x1, y1, r1, x2, y2, r2;
    int distance, r1_plus_r2, r1_minus_r2;
    int result;

    for (cin >> T; T > 0 ; T--) {
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        distance = (x1-x2)*(x1-x2) + (y1-y2)*(y1-y2);
        r1_plus_r2 = (r1+r2) * (r1+r2);
        r1_minus_r2 = (r1-r2) * (r1-r2);
        if (x1 == x2 && y1 == y2 && r1 == r2) {
            result = -1;
        } else if (distance > r1_plus_r2 || distance < r1_minus_r2) {
            result = 0;
        } else if (distance == r1_plus_r2 || distance == r1_minus_r2) {
            result = 1;
        } else {
            result = 2;
        }
        cout << result << endl;
    }
    return 0;
}
