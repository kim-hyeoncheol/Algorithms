/*
 * 2740 - 행렬 곱셈
 * https://www.acmicpc.net/problem/2740
 * Run Time : 4 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, M, K, A[100][100], B[100][100], C[100][100], i, j, k;
    cin >> N >> M;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            cin >> A[i][j];
    cin >> M >> K;
    for (j = 0; j < M; j++)
        for (k = 0; k < K; k++)
            cin >> B[j][k];
    for (i = 0; i < N; i++)
        for (k = 0; k < K; k++)
            C[i][k] = 0;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            for (k = 0; k < K; k++)
                C[i][k] += A[i][j] * B[j][k];
    for (i = 0; i < N; i++) {
        for (k = 0; k < K; k++)
            cout << C[i][k] << " ";
        cout << endl;
    }
    return 0;
}


