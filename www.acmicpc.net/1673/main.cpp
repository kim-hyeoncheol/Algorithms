/*
 * 1673 - 치킨 쿠폰
 * https://www.acmicpc.net/problem/1673
 * Run Time : 0 MS
 * 나눗셈
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n, k, count;
    while ( cin >> n >> k ) {
        for (count = n; n >= k; n = n % k + n / k)
            count += n / k;
        cout << count << endl;
    }
    return 0;
}


