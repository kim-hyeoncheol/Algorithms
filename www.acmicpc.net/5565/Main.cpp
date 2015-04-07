/*
 * 5565 - 영수증
 * https://www.acmicpc.net/problem/5565
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int total, price;
    cin >> total;
    for (int i = 0; i < 9; i++) {
        cin >> price;
        total -= price;
    }
    cout << total << endl;
    return 0;
}


