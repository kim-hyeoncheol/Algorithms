/*
 * 1735 - 분수 합
 * https://www.acmicpc.net/problem/1735
 * Run Time : 
 */
#include <iostream>

using namespace std;

int get_gcd(int a, int b) {
	if (a % b == 0) return b;
	return get_gcd(b, a % b); 
}

int main(int argc, char* argv[]) {
	int	A, B, C, D;
	cin >> A >> B >> C >> D;
	A = A * D + B * C;
	B *= D;
	C = get_gcd(A, B);
	cout << A / C << " " << B / C << endl;
	
	
	return 0;
}


