/*
 * 2444 - 별찍기 - 7
 * https://www.acmicpc.net/problem/2444
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N;
    cin >> N;
    for (int i = 1; i < N; i++) {
        cout.width(N-i);
        cout.fill(' ');
        cout << "";
        cout.width(2 * i - 1);
        cout.fill('*');
        cout << "" << endl;
    }
    for (int i = 0; i < N; i++) {
        cout.width(i);
        cout.fill(' ');
        cout << "";
        cout.width(2 * (N-i) - 1);
        cout.fill('*');
        cout << "" << endl;
    }
    return 0;
}
