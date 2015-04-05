/*
 * 1100 - 하얀 칸
 * https://www.acmicpc.net/problem/1100
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    string  str;
    int cnt = 0;

    for (int i = 0; i < 8; i++) {
        cin >> str;
        for (int j = 0; j < 8; j++) {
            if (str[j] == 'F' && (i + j) % 2 == 0)   cnt++;
        }
    }
    cout << cnt << endl;

    return 0;
}


