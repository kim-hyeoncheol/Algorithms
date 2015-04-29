/*
 * 2839 - 설탕 배달
 * https://www.acmicpc.net/problem/2839
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, i;
    cin >> N;
    for (i = 0; i * 3 <= N; i++)
        if ((N - i * 3) % 5 == 0)   break;
    if (i * 3 > N)  cout << -1 << endl;
    else cout << i + (N - i * 3) / 5 << endl;
    return 0;
}


