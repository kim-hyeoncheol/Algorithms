/*
 * 2748 - 피보나치 수 2
 * https://www.acmicpc.net/problem/2748
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    long long   f[91], n, i;
    f[0] = 0;
    f[1] = 1;
    cin >> n;
    for (i = 2; i <= n; i++)
        f[i] = f[i-1] + f[i-2];
    cout << f[n] << endl;
    return 0;
}


