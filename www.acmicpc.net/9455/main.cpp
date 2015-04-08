/*
 * 9455 - 박스
 * https://www.acmicpc.net/problem/9455
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int T, m, n, box[100][100], i, j, move, count;

    for (cin >> T; T; T--) {
        cin >> m >> n;
        for (i = 0; i < m; i++)
            for (j = 0 ; j < n; j++)
                cin >> box[i][j];
        move = 0;
        for (j = 0; j < n; j++) {
            count = 0;
            for (i = 0; i < m; i++) {
                if (box[i][j] == 0) continue;
                count++;
                move += m - i - count;
            }
        }
        cout << move << endl;
    }
    return 0;
}


