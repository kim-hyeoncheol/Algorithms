/*
 * 2436 - 공약수
 * https://www.acmicpc.net/problem/2436
 * Run Time : 
 */
#include <iostream>

using namespace std;

int get_gcd(int a, int b) {
	    if (a % b == 0) return b;
		    return get_gcd(b, a % b); 
}

int main(int argc, char* argv[]) {
	long long	gcd, lcm, A, B, min, min_A, min_B, i;
	while (cin >> gcd >> lcm) {
		if (lcm % gcd)	continue;
		min = 200000000;
		for (i = 1; i <= lcm; i++) {
			if (lcm % i)	continue;
			A = gcd * i;
			B = lcm / i;
			if (get_gcd(A, B) != gcd)	continue;
			if (A > B)	break;
			if (min > A + B) {
				min = A + B;
				min_A = A;
				min_B = B;
			}
		}
		cout << min_A << " " << min_B << endl;
	}
    return 0;
}


