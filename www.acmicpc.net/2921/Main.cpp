/*
 * 2921 - 도미노
 * https://www.acmicpc.net/problem/2921
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, sum = 0;
    cin >> N;
    for (int i = 1; i <= N; i++)
        sum += (i * (i + 1) * 3 / 2);
    cout << sum << endl;
    return 0;
}


