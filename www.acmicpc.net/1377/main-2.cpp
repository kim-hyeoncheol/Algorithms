/*
 * 1377 - 버블 소트
 * https://www.acmicpc.net/problem/1377
 * Run Time : Time Out
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, max, i, j;
    int bubble[500000], count;

    while (cin >> N) {
        for (max = i = 0; i < N; i++) {
            cin >> bubble[i];
            for (count = j = 0; j < i; j++) {
                if (bubble[j] > bubble[i])  count++;
            }
            if (max < count)    max = count;
        }
        cout << max + 1 << endl;
    }
    return 0;
}


