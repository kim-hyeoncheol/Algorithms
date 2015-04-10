/*
 * 1026 - 보물
 * https://www.acmicpc.net/problem/1026
 * Run Time : 
 */
#include <iostream>
#include <algorithm>
#include <functional>

using namespace std;

int main(int argc, char *argv[]) {
    int N, A[50], B[50], i, result = 0;

    cin >> N;
    for (i = 0; i < N; i++) cin >> A[i];
    for (i = 0; i < N; i++) cin >> B[i];

    sort(A, A+N, greater<int>());
    sort(B, B+N);

    for (i = 0; i < N; i++) {
        result += A[i] * B[i];
    }

    cout << result << endl;
    return 0;
}
