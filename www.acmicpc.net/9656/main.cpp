/*
 * 9656 - 돌 게임 2
 * https://www.acmicpc.net/problem/9656
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N;
    cin >> N;
    if (N % 2)
        cout << "CY" << endl;
    else
        cout << "SK" << endl;
    return 0;
}

