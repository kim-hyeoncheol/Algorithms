/*
 * 2003 - 수들의 합 2
 * https://www.acmicpc.net/problem/2003
 * Run Time : 4 MS
 * binary_search() 활용, 속도 개선
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int N, M, A[10001], i, count = 0;
    cin >> N >> M;
    A[0] = 0;
    for (i = 1; i <= N; i++) {
        cin >> A[i];
        A[i] += A[i-1];
        // A[i] > 0 이므로 sum(A[1] ~ A[i]) 는 오름차순으로 정렬된 상태이다.
        if (binary_search(A, A + i, A[i] - M))  count++;
    }
    cout << count << endl;

    return 0;
}


