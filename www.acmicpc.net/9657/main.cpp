/*
 * 9657 - 돌 게임 3
 * https://www.acmicpc.net/problem/9657
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;


int main(int argc, char* argv[]) {
    bool isSK = true, isCY = false, game[1001];
    int N, i;
    cin >> N;
    game[1] = game[3] = game[4] = isSK;
    game[2] = isCY;
    for (i = 5; i <= N; i++)
        game[i] = !game[i - 1] || !game[i - 3] || !game[i - 4];
    if (game[N])
        cout << "SK" << endl;
    else
        cout << "CY" << endl;
    return 0;
}

