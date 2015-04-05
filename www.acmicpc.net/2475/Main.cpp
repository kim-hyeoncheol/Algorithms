/*
 * 2475 - 검증수
 * https://www.acmicpc.net/problem/2475
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int id, sum = 0;
    for (int i = 0; i < 5; i++) {
        cin >> id;
        sum += id * id;
    }
    cout << sum % 10 << endl;
    return 0;
}


