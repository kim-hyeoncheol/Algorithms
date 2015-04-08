/*
 * 1292 - 쉽게 푸는 문제
 * https://www.acmicpc.net/problem/1292
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int A, B, seq[1000], sum = 0, idx, i, j;

    for (idx = 0; idx < 1000; ) {
        for (i = 1; idx < 1000; i++)
            for (j = 0; idx < 1000 && j < i; j++)
                seq[idx++] = i;
    }
    cin >> A >> B;
    for (i = A; i <= B; i++) {
        sum += seq[i-1];
    }
    cout << sum << endl;
    return 0;
}


