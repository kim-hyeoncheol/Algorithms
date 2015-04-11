/*
 * http://183.106.113.109/30stair/divisor1/divisor1.php?pname=divisor1
 * Run Time : 
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    long long A, B, a, b, sum, count, i, mod = 1000000003;

    while (cin >> A >> B) {
        a = (long long)sqrtl((long double)(A - 1.0)) + 1;
        b = (long long)sqrtl((long double)(B));
        sum = count = 0;
        for (i = a; i <= b; i++) {
            sum = (sum + (i % mod) * (i % mod) % mod) % mod;
            count++;
        }
        cout << count << " " << sum << endl;
    }
    return 0;
}


