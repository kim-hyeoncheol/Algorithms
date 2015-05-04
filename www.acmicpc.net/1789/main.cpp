//==========================================================================
// Name        : 1789 - 수들의 합 
// Problem	   : https://www.acmicpc.net/problem/1789
// Author      : Kim, Hyeon-Cheol
// Run Time    : 0 MS
// Description : 수열의 합
//==========================================================================

#include <iostream>
using namespace std;

int main() {
	long long	S, N = 0, i;
	cin >> S;
	for (i = 1; i + i < S; i++) {
		if (i < S - i) {
			S -= i;
			N++;
		}
	}

	if (N > 0)	N++;
	cout << N << endl;
	return 0;
}
