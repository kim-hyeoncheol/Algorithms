/*
 * 1912 - 부분합
 * https://www.acmicpc.net/problem/1912
 * Run Time : 1900 MS
 *
 * 너무 오래 걸리네...
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n, sum[100001], i, j, max;
    cin >> n;
    sum[0] = max = 0;
    for (i = 1; i <= n; i++) {
        cin >> sum[i];
        sum[i] += sum[i-1];
        for (j = 0; j < i; j++) {
            if (max < sum[i] - sum[j])
                max = sum[i] - sum[j];
        }
    }
    cout << max << endl;

    return 0;
}


