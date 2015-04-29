/*
 * 5054 - 주차의 신
 * https://www.acmicpc.net/problem/5054
 * Run Time : 0 MS
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int t, n, i, store[20];
    for (cin >> t; t; t--) {
        cin >> n;
        for (i = 0; i < n; i++) cin >> store[i];
        sort (store, store + n);
        cout << (store[n-1] - store[0]) * 2 << endl;
    }
    return 0;
}


