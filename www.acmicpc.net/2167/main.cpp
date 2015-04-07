/**
 * 2167 - 2차원 배열의 합 성공
 * https://www.acmicpc.net/problem/2167
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int mat[300][300], N, M, K, i, j, x, y, sum;

    cin >> N >> M;
    for (i = 0; i < N; i++)
        for (j = 0; j < M; j++)
            cin >> mat[i][j];
    for (cin >> K; K; K--) {
        cin >> i >> j >> x >> y;
        sum = 0;
        for (int a = i - 1; a < x; a++)
            for (int b = j - 1; b < y; b++)
                sum += mat[a][b];
        cout << sum << endl;
    }
    return 0;
}


