/*
 * 5347 - LCM
 * https://www.acmicpc.net/problem/5347
 * Run Time : 0 MS
 * 1 <= a, b <= 1000000 이므로 Overflow 나지 않게 조심해야 한다.
 * 큰 데이타 타입을 쓰든 곱하기 할 때 조심하든...
 */
#include <iostream>

using namespace std;

long long get_gcd(long long a, long long b) {
	if (a % b == 0) return b;
	return get_gcd(b, a % b); 
}

int main(int argc, char* argv[]) {
	int	n;
	long long a, b;
	for (cin >> n; n; n--) {
		cin >> a >> b;
		cout << a * b / get_gcd(a, b) << endl;
	}
	return 0;
}


