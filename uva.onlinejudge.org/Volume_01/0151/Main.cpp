/*
 * 151 - Power Crisis
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=87
 * Run Time : 0.000
 */
#include <iostream>
#include <algorithm>

using namespace std;

int power[100];

int get_m(int N) {
	int m, i, j, count = 0;
	for (m = 1; ; m++) {
		power[1] = 0;
		count = 1;
		for (i = 2; i <= N; i++)	power[i] = 1;
		for (i = 1; i != 13; ) {
			for (j = 0; j < m; ) {
				i++;
				if (i > N)	i = 1;
				if (power[i] > 0) {
					j++;
				}
			}
			power[i] = 0;
			count++;
		}

		if (count == N) {
			return m;
		}
	}
}

int main(int argc, char* argv[]) {
	int N;
    while (cin >> N) {
    	if (N == 0)	break;
    	cout << get_m(N) << endl;
	}
    return 0;
}

