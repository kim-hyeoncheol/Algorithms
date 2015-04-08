/*
 * 2506 - 점수계산
 * https://www.acmicpc.net/problem/2506
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, cur, point = 1, sum = 0;

    for (cin >> N; N; N--) {
        cin >> cur;
        if (cur == 1) sum += point++;
        else point = 1;
    }
    cout << sum << endl;
    return 0;
}


