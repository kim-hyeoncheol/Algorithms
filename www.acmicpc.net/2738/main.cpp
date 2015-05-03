/*
 * 2738 - 행렬 덧셈
 * https://www.acmicpc.net/problem/2738
 * Run Time : 4 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, M, mat[100][100], i, j, tmp;
    cin >> N >> M;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            cin >> mat[i][j];
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++) {
            cin >> tmp;
            mat[i][j] += tmp;
        }
    for (i = 0; i < N; i++) {
        for (j = 0; j < M; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}


