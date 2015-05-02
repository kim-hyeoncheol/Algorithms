/*
 * 2003 - 수들의 합 2
 * https://www.acmicpc.net/problem/2003
 * Run Time : 60 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, M, A[10001], i, j, a, count = 0;
    cin >> N >> M;
    A[0] = 0;
    for (i = 1; i <= N; i++) {
        cin >> a;
        A[i] = A[i-1] + a;
        for (j = 0; j < i; j++)
            if (A[i] - A[j] == M) count++;
    }
    cout << count << endl;

    return 0;
}


