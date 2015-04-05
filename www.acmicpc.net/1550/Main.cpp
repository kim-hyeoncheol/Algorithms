/*
 * 1550 - 진법 변환
 * https://www.acmicpc.net/problem/1550
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N = 0;
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        N *= 16;
        if (str[i] >= '0' && str[i] <= '9') N += str[i] - '0';
        else if (str[i] >= 'A' && str[i] <= 'F')    N += str[i] - 'A' + 10;
    }
    cout << N << endl;
    return 0;
}


