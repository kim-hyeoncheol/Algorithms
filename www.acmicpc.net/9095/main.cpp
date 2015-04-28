/*
 * 9095 - 1, 2, 3 더하기
 * https://www.acmicpc.net/problem/9095
 * Run Time : 0 MS
 * DP (Dynamic Programming) 기초
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int T, sum[11], n;

    for (sum[0] = n = 1; n < 11; n++) {
        sum[n] = sum[n-1];
        if (n >= 2) sum[n] += sum[n-2];
        if (n >= 3) sum[n] += sum[n-3];
    }
    for (cin >> T; T; T--) {
        cin >> n;
        cout << sum[n] << endl;
    }
    return 0;
}


