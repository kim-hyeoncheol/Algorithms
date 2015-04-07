/*
 * 2581 - 소수
 * https://www.acmicpc.net/problem/2581
 * Run Time : 
 */
#include <iostream>

using namespace std;

bool    is_prime(int n) {
    if (n == 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main(int argc, char* argv[]) {
    int M, N, min = 10000, sum = 0;
    cin >> M >> N;
    for (int i = M; i <= N; i++) {
        if (!is_prime(i))   continue;
        if (min > i)    min = i;
        sum += i;
    }
    if (sum == 0)   cout << -1 << endl;
    else cout << sum << endl << min << endl;
    return 0;
}


