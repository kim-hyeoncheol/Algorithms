/*
 * 1408 - 24
 * https://www.acmicpc.net/problem/1408
 * Run Time : 0 MS
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char* argv[]) {
	int	H1, M1, S1;
	int	H2, M2, S2;

	scanf("%d:%d:%d\n", &H1, &M1, &S1);
	scanf("%d:%d:%d\n", &H2, &M2, &S2);
	S2 -= S1;
	M2 -= M1;
	H2 -= H1;
	if (S2 < 0) {
		S2 += 60;
		M2--;
	}
	if (M2 < 0) {
		M2 += 60;
		H2--;
	}
	if (H2 < 0) {
		H2 += 24;
	}
	printf ("%02d:%02d:%02d\n", H2, M2, S2);
    return 0;
}


