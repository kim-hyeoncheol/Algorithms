/*
 * 9085 - 더하기
 * https://www.acmicpc.net/problem/9085
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int T, N, sum, cur;

    for (cin >> T; T; T--) {
        sum = 0;
        for (cin >> N; N; N--) {
            cin >> cur;
            sum += cur;
        }
        cout << sum << endl;
    }
    return 0;
}


