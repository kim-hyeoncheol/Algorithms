/**
 * 2609 - 최대공약수와 최소공배수
 * https://www.acmicpc.net/problem/2609
 */
#include <iostream>

using namespace std;

int getGCD(int a, int b) {
    if (a % b == 0) return b;
    return getGCD(b, a % b);
}

int main(int argc, char *argv[]) {
    int a, b;

    cin >> a >> b;
    cout << getGCD(a, b) << endl << a * b / getGCD(a, b) << endl;
    return 0;
}
