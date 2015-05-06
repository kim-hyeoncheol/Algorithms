/*
 * 10327 - 피보나치 문제해결전략
 * https://www.acmicpc.net/problem/10327
 * Run Time : 0 MS
 *
 * 정수론
 *
 * Fibonacci
 *      F[1] = 1, F[2] = 1;
 *      F[i] = F[i-2] + F[i-1]           (i > 2)
 *
 * Gabonacci
 *      G[i] = G[i-2] + G[i-1]           (i > 2)
 *           = a * F[i-2] + b * F[i-1]
 *           = (b - a) * F[i-1] + a * F[i]
 *
 * n = (b - a) * F[i-1] + a * F[i]
 * => n = (b - a) * F[i-1]      (mod F[i])
 * => (b - a) = n / (F[i-1])    (mod F[i])
 *            = n * F[i-1 - i%2]    (mod F[i])          (<= *****)
 *
 * Therefore
 * min(c) = (n * F[i-1 - i%2]) % F[i]
 * If c * F[i-1] < n   then
 *      a = (n - c * F[i-1]) / F[i]
 *      b = a + c
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    long long F[46], n, i, a, b, c, T;

    F[0] = 0;
    F[1] = 1;
    for (i = 2; i < 46; i++)    F[i] = F[i-1] + F[i-2];
    for (cin >> T; T; T--)
    {
        cin >> n;
        for (i = 45; i > 0; i--)
        {
            c = (n * F[i-1 - i%2]) % F[i];
            if (c * F[i-1] < n)
            {
                a = (n - c * F[i-1]) / F[i];
                b = a + c;
                cout << a << " " << b << endl;
                break;
            }
        }
    }
    return 0;
}

