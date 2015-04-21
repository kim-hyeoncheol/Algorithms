/**
 * 1010 - 다리 놓기
 * https://www.acmicpc.net/problem/1010
 * Run Time : 4 MS
 * nCr 구하기
 * 30! 의 값이 long long 범위에서도 오버플로우가 발생하므로 
 * 미리 약분해 놓아야 한다.
 */
#include <iostream>

using namespace std;

long long get_gcd(long long a, long long b) {
	if (a % b == 0) return b;
	return get_gcd(b, a % b); 
}

int main(int argc, char* argv[]) {
	long long N, M, mo[30], ja[30], i, j, gcd;

	int	T;
	for (cin >> T; T; T--) {
		cin >> N >> M;
		for (i = 0; i < N; i++) {
			ja[i] = M - i;
			mo[i] = i + 1;
		}
		for (i = 0 ; i < N; i++) {
			for (j = 0 ; j < N; j++) {
				if (mo[i] > 1) {
					gcd = get_gcd(mo[i], ja[j]);
					if (gcd > 1) {
						mo[i] /= gcd;
						ja[j] /= gcd;
					}
				}
			}
		}
		j = 1;
		for (i = 0; i < N; i++)
			j *= ja[i];
		cout << j << endl;
	}
	return 0;
}


