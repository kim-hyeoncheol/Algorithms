/*
 * 9662 - 돌 게임 8
 * https://www.acmicpc.net/problem/9662
 * Run Time : Wrong Answer
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    long long   M, K, i, j, Kstone[22], cnt = 0;
    bool    game[22];
    cin >> M >> K;
    for (i = 0; i < 22; i++)    game[i] = false;
    for (i = 0; i < K; i++)     cin >> Kstone[i];
    for (i = 1; i <= 22 && i <= M; i++) {
        for (j = 0; j < K && Kstone[j] <= i; j++) {
            if (i == Kstone[j]) {
                game[i % 22] = true;
                break;
            }
            if (!game[(i-Kstone[j]) % 22]) {
                game[i % 22] = true;
                break;
            }
        }
        if (!game[i % 22]) {
            cnt++;
        }
    }
    for (; i <= M; i++) {
        for (j = 0; j < K; j++) {
            if (!game[(i-Kstone[j]) % 22]) {
                game[i % 22] = true;
                break;
            }
        }
        if (!game[i % 22]) {
            cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}

