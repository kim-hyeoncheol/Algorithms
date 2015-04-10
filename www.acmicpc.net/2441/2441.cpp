/*
 * 2441 - 별찍기 - 4
 * https://www.acmicpc.net/problem/2441
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout.width(i);
        cout.fill(' ');
        cout << "";
        cout.width(N-i);
        cout.fill('*');
        cout << "" << endl;
    }
    return 0;
}
