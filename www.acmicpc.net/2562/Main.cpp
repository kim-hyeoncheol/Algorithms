/*
 * 최대값
 * https://www.acmicpc.net/problem/2562
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, max = 0, max_id;

    for (int i = 0; i < 9; i++) {
        cin >> N;
        if (max < N) {
            max = N;
            max_id = i + 1;
        }
    }
    cout << max << endl << max_id << endl;
    return 0;
}


