/*
 * 4435 - 중간계 전쟁
 * https://www.acmicpc.net/problem/4435
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int gandalf[6] = { 1, 2, 3, 3, 4, 10 };
    int sauron[7] = { 1, 2, 2, 2, 3, 5, 10 };
    int T, i, j, g[6], s[7], g_sum, s_sum;
    cin >> T;
    for (i = 1; i <= T; i++) {
        g_sum = s_sum = 0;
        for (j = 0; j < 6; j++) {
            cin >> g[j];
            g_sum += g[j] * gandalf[j];
        }
        for (j = 0; j < 7; j++) {
            cin >> s[j];
            s_sum += s[j] * sauron[j];
        }
        cout << "Battle " << i << ": ";
        if (g_sum > s_sum)  cout << "Good triumphs over Evil";
        else if (g_sum < s_sum) cout << "Evil eradicates all trace of Good";
        else cout << "No victor on this battle field";
        cout << endl;
    }
    return 0;
}


