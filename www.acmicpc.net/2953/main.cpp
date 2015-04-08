/*
 * 2953 - 나는 요리사다
 * https://www.acmicpc.net/problem/2953
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int i, j, max = 0, max_i, sum, cur;

    for (i = 0; i < 5; i++) {
        sum = 0;
        for (j = 0; j < 4; j++) {
            cin >> cur;
            sum += cur;
        }
        if (max < sum) {
            max = sum;
            max_i = i;
        }
    }
    cout << max_i + 1 << " " << max << endl;
    return 0;
}


