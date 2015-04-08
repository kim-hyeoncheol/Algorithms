/*
 * 1110 - 더하기 사이클
 * https://www.acmicpc.net/problem/1110
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, tmp, count;

    while (cin >> N) {
        count = 0, tmp = N;
        do {
            tmp = tmp % 10 * 10 + (tmp / 10 + tmp % 10) % 10;
            count++;
        } while (tmp != N);
        cout << count << endl;
    }
    return 0;
}


