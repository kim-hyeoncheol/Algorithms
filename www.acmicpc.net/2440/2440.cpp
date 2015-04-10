/*
 * 2440 - 별찍기 - 3
 * https://www.acmicpc.net/problem/2440
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout.width(N-i);
        cout.fill('*');
        cout << "" << endl;
    }
    return 0;
}
