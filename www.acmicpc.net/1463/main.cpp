/*
 * 1463 - 1로 만들기
 * https://www.acmicpc.net/problem/1463
 * Run Time : 
 *
 * Hint : Dynamic Programming
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, count[1000001], i;
    for (i = 0; i <= 1000000; i++)  count[i] = 1000000;
    count[1] = 0;
    count[2] = count[3] = 1;
    for (i = 4; i <= 1000000; i++) {
        if (i % 3 == 0 && count[i] > count[i / 3] + 1)
            count[i] = count[i / 3] + 1;
        if (i % 2 == 0 && count[i] > count[i / 2] + 1)
            count[i] = count[i / 2] + 1;
        if (count[i] > count[i - 1] + 1)
            count[i] = count[i - 1] + 1;
    }

    while (cin >> N)
        cout << count[N] << endl;
    return 0;
}


