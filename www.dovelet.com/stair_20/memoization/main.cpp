/*
 * memoization
 * http://183.106.113.109/30stair/memoization/memoization.php?pname=memoization 
 * Run Time : 
 *
 * 권한이 없어서 제출 못한 문제
 */
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char* argv[]) {
    map <int, int>  a;
    int Q, a_1, p, q, k, n, i;
    for (cin >> Q; Q; Q--) {
        cin >> a_1 >> p >> q >> k >> n;
        p %= k;
        q %= k;
        a[0] = a_1 % k;
        for (i = 1; i < n; i++) {
            a[i] = (p * a[i-1] + q) % k;
            if (a[i] == a[0])   break;
        }
        cout << a[(n - 1) % i] << endl;
        a.clear();
    }
    return 0;
}


