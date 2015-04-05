/*
 * 1977 - 완전제곱수
 * https://www.acmicpc.net/problem/1977
 * Run Time : 
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    int M, N, sum = 0;
    cin >> M >> N;
    M = (int)sqrt((double)M - 1.0) + 1;
    for (int i = M; i * i <= N; i++)
        sum += i * i;
    if (sum == 0)   cout << -1 << endl;
    else cout << sum << endl << M * M << endl;

    return 0;
}


