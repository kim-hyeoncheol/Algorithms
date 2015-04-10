/*
 * 2438 - 별찍기 - 1
 * https://www.acmicpc.net/problem/2438
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N;
    cin >> N;
    for (int i = 1; i <= N; i++) {
        cout.width(i);
        cout.fill('*');
        cout << "" << endl;
    }
    return 0;
}
