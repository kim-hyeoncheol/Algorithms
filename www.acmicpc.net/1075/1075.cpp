/*
 * 1075 - 나누기
 * https://www.acmicpc.net/problem/1075
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N, F, i;

    cout.fill('0');
    cout.width(2);

    while (cin >> N >> F) {
        N = N - N % 100;
        for (i = 0; i < 100; i ++) {
            if ((N + i) % F == 0) {
                cout << i << endl;
                break;
            }
        }
    }
    return 0;
}

