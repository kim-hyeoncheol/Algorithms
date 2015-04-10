/*
 * http://183.106.113.109/30stair/pie/pie.php?pname=pie
 * Run Time : 
 */
#include <iostream>

using namespace std;

int get_gcd(int a, int b) {
    if (a % b == 0) return b;
    return get_gcd(b, a % b); 
}

int main(int argc, char* argv[]) {
    int a, b, c, d, gcd, lcm, mo, ja;
    while (cin >> a >> b >> c >> d) {
        gcd = get_gcd(b, d);
        lcm = b * d / gcd;
        ja = lcm - a * d / gcd - c * b / gcd;
        if (ja > 0) {
            gcd = get_gcd(ja, lcm);
            ja /= gcd;
            mo = lcm / gcd;
            cout << ja << "/" << mo << endl;
        } else {
            cout << 0 << endl;
        }
    }
    return 0;
}


