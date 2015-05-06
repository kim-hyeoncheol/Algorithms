/*
 * 10327 - 피보나치 문제해결전략
 * https://www.acmicpc.net/problem/10327
 * Run Time : Time Out
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    long long f[100], n, i, j, min_a, min_b;
    int T;

    for (cin >> T; T; T--) {
        cin >> n;
        min_a = min_b = f[0] = n;
        for (i = n - 1; i > 0 ; i--) {
            f[1] = i;
            for (j = 2; f[j-1] > 0 && f[j-1] <= f[j-2]; j++)
                f[j] = f[j-2] - f[j-1];
            if (min_b < f[j-3])   break;
            min_a = f[j-2];
            min_b = f[j-3];
        }
        cout << min_a << " " << min_b << endl;
    }

    return 0;
}


