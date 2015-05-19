/*
 * 9662 - 돌 게임 8
 * https://www.acmicpc.net/problem/9662
 * Run Time : 메모리 초과
 */
#include <iostream>

using namespace std;

bool    game[1000000001];

int main(int argc, char* argv[])
{
    long long   M, K, i, j, Kstone[22], cnt = 0;
    cin >> M >> K;
    for (i = 0; i <= M; i++)    game[i] = false;
    for (i = 0; i < K; i++)     cin >> Kstone[i];
    for (i = 0; i <= M; i++) {
        if (game[i])  continue;
        cnt++;
        for (j = 0; j < K; j++)
            game[i + Kstone[j]] = true;
    }
    cout << cnt - 1 << endl;

    return 0;
}

