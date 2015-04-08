/*
 * 2566 - 최댓값
 * https://www.acmicpc.net/problem/2566
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int i, j, cur, max = 0, max_i, max_j;
    for (i = 0; i < 9; i++)
        for (j = 0; j < 9; j++) {
            cin >> cur;
            if (max < cur) {
                max = cur;
                max_i = i;
                max_j = j;
            }
        }
    cout << max << endl << max_i + 1 << " " << max_j + 1 << endl;
    return 0;
}


