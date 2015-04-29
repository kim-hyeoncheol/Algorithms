/*
 * 9076 - 점수 집계
 * https://www.acmicpc.net/problem/9076
 * Run Time : 0 MS
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int T, point[5], i;
    for (cin >> T; T; T--) {
        for (i = 0; i < 5; i++) cin >> point[i];
        sort(point, point + 5);
        if (point[3] - point[1] >= 4)   cout << "KIN" << endl;
        else    cout << point[1] + point[2] + point[3] << endl;
    }
    return 0;
}


