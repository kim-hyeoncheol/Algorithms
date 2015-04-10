/*
 * 2576 - 홀수
 * https://www.acmicpc.net/problem/2576
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int min_odd = 100, sum_odd = 0, input;

    for(int i = 0; i < 7; i++) {
        cin >> input;
        if (input % 2 == 1) {
            sum_odd += input;
            if (min_odd > input)    min_odd = input;
        }
    }
    if (sum_odd == 0) cout << -1 << endl;
    else cout << sum_odd << endl << min_odd << endl;
    return 0;
}
