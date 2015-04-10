/*
 * 1934 - 최소공배수
 * https://www.acmicpc.net/problem/1934
 * Run Time : 
 */
#include <iostream>

using namespace std;

int getGCD(int a, int b) {
    if (a % b == 0) return b;
    return getGCD(b, a % b);
}

int main(int argc, char *argv[]) {
    int N, a, b, gcd;

    for (cin >> N; N; N--) {
        cin >> a >> b;
        gcd = getGCD(a, b);
        cout << a * b / gcd << endl;

    }
    return 0;
}
