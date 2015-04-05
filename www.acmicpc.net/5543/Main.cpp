/*
 * 5543 - 상근날드
 * https://www.acmicpc.net/problem/5543
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int min_burger = 2000, min_beverage = 2000;
    int n;

    for (int i = 0; i < 3; i++) {
        cin >> n;
        if (min_burger > n) min_burger = n;
    }
    for (int i = 0; i < 2; i++) {
        cin >> n;
        if (min_beverage > n) min_beverage = n;
    }
    cout << min_burger + min_beverage - 50 << endl;
    return 0;
}


