/*
 * 108 - Maximum Sum
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=44
 * Run Time : 0.049
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int mat[100][100];
	int N;
	int i, j, m, n;
	int max_sum, cur;

	while (cin >> N) {
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				cin >> mat[i][j];
				if (i > 0) mat[i][j] += mat[i-1][j];
				if (j > 0) mat[i][j] += mat[i][j-1];
				if (i > 0 && j > 0) mat[i][j] -= mat[i-1][j-1];
			}
		}
		max_sum = mat[0][0];
		for (i = 0; i < N; i++) {
			for (j = 0; j < N; j++) {
				for (m = 0; m <= i; m++) {
					for (n = 0; n <= j; n++) {
						cur = mat[i][j];
						if (m < i)	cur -= mat[m][j];
						if (n < j)	cur -= mat[i][n];
						if (m < i && n < j)	cur += mat[m][n];
						if (max_sum < cur)	max_sum = cur;
					}
				}
			}
		}
		cout << max_sum << endl;
	}

    return 0;
}


