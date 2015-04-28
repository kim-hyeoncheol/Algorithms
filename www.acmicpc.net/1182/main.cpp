/*
 * 1182 - 부분집합의 합
 * https://www.acmicpc.net/problem/1182
 * Run Time : 4 MS
 * Recursion
 */
#include <iostream>

using namespace std;

int num[20], N, S;

int count_subset(int n, int s) {
    int count = 0;
    if (num[n] + s == S) count++;
    if (n + 1 < N) {
        count += count_subset(n + 1, s + num[n]);
        count += count_subset(n + 1, s);
    }
    return count;
}

int main(int argc, char* argv[]) {
    int i;
    cin >> N >> S;
    for (i = 0; i < N; i++) cin >> num[i];
    cout << count_subset(0, 0) << endl;
    return 0;
}


