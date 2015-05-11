/*
 * 9659 - 돌 게임 5
 * https://www.acmicpc.net/problem/9659
 * Run Time : 0 MS
 */
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string N;
    cin >> N;
    if ((N[N.size() - 1] - '0') % 2 == 0)
        cout << "CY" << endl;
    else
        cout << "SK" << endl;
    return 0;
}

