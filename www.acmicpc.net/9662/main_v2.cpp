/*
 * 9662 - 돌 게임 8
 * https://www.acmicpc.net/problem/9662
 * Run Time : 시간 초과
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
    long long   M, K, i, j, Kstone[22], cnt = 0;
    bool    game[10000];
    cin >> M >> K;
    for (i = 0; i < K; i++)     cin >> Kstone[i];
    for (i = 0; i <= M; i++) {
        game[i % 10000] = false;
        for (j = 0; j < K && Kstone[j] <= i; j++) {
            if (!game[(i-Kstone[j]) % 10000]) {
                game[i % 10000] = true;
                break;
            }
        }
        if (!game[i % 10000]) {
            //cout << i << " ";
            cnt++;
        }
    }
    for (i = 1; i <= M; i++)    cout << game[i];
    cout << endl;
    cout << cnt - 1 << endl;

    return 0;
}

