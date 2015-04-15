/*
 * gcd_lcm
 * http://183.106.113.109/30stair/gcd_lcm/gcd_lcm.php?pname=gcd_lcm&stair=3
 * Run Time : 0.21
 */
#include <iostream>

using namespace std;

int get_gcd(int a, int b) {
    if (a % b == 0) return b;
    return get_gcd(b, a % b); 
}

int main(int argc, char* argv[]) {
    int a, b, gcd, lcm;
    while (cin >> a >> b) {
		gcd = get_gcd(a, b);
		lcm = a * b / gcd;
        cout << gcd << " " << lcm << endl;
    }
    return 0;
}


