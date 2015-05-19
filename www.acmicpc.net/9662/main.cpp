/*
 * 9662 - 돌 게임 8
 * https://www.acmicpc.net/problem/9662
 * Run Time : 
 */
#include <iostream>
#define SIZE    512

using namespace std;

int main(int argc, char* argv[])
{
    long long   M, K, i, j, stone[22], cycle = 0, sub_cnt = 0, total_cnt = 0;
    bool    game[SIZE];    // sigma[1...22] + a
    cin >> M >> K;
    for (i = 0; i < K; i++) {
        cin >> stone[i];
        cycle += stone[i];
    }
    cycle *= 2;
    for (i = 0; i <= cycle; i++) game[i] = false;
    for (i = 1; i <= cycle; i++) {
        for (j = 0; j < K; j++) {
            if (i < stone[j])   break;
            if (!game[i - stone[j]]) {
                game[i] = true;
                break;
            }
        }
        if (!game[i])   sub_cnt++;
    }
    total_cnt = sub_cnt * (M / cycle);

    cout << "sub_cnt = " << sub_cnt << endl;
    cout << "M = " << M << endl;
    cout << "cycle = " << cycle << endl;
    cout << "total_cnt = " << total_cnt << endl;
    M %= cycle;
    for (i = 1; i <= M; i++)
        if (!game[i])   total_cnt++;
    cout << total_cnt << endl;

    for (i = 1; i <= cycle; i++) {
        cout << game[i];
        if (i % 20 == 0)    cout << endl;
    }
    cout << endl;

    return 0;
}

