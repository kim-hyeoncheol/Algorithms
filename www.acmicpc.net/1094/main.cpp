/*
 * 1094 - 막대기
 * https://www.acmicpc.net/problem/1094
 * Run Time : 0 MS
 * 2진법
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int X, count, i, bit;
    while (cin >> X) {
        count = 0;
        bit = 1;
        for (i = 0; i < 7; i++) {
            if (X & bit)    count++;
            bit *= 2;
        }
        cout << count << endl;
    }
    return 0;
}


