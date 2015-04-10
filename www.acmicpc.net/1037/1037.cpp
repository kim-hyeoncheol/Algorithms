/*
 * 1037 - 약수
 * https://www.acmicpc.net/problem/1037
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N, A, minA = 1000000, maxA = 1;

    for (cin >> N; N; N--) {
        cin >> A;
        if (minA > A)   minA = A;
        if (maxA < A)   maxA = A;
    }
    cout << minA * maxA << endl;
    return 0;
}
