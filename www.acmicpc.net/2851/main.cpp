/*
 * 2851 - 슈퍼 마리오
 * https://www.acmicpc.net/problem/2851
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int abs(int a, int b) {
    if (a > b)  return (a - b);
    else return (b - a);
}

int main(int argc, char* argv[]) {
    int i, n[10], sum = 0;
    for (i = 0; i < 10; i++)    cin >> n[i];
    for (i = 0; i < 10; i++) {
        if (abs(sum, 100) >= abs(sum + n[i], 100))
            sum += n[i];
        else    break;
    }
    cout << sum << endl;
    return 0;
}


