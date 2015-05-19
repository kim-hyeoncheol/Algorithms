/*
 * 3460 - 이진수
 * https://www.acmicpc.net/problem/3460
 * Run Time : 0 MS
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int T, n, i;
    for (cin >> T; T; T--)
    {
        cin >> n;
        for (i = 0; n; i++)
        {
            if (n & 1)  cout << i << " ";
            n /= 2;
        }
        cout << endl;
    }
    return 0;
}


