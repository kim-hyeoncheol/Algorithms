/*
 * 1913 - 달팽이
 * https://www.acmicpc.net/problem/1913
 * Run Time : 152 MS
 * simulation
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	mat[1000][1000], x, y, i, j, interval, num = 1, N;
	x = y = 500;
	mat[x][y] = num++;
	interval = 1;
	while (num <= 998001) {
		for (i = 0; num <= 998001 && i < interval; i++) mat[--x][y] = num++;
		for (i = 0; num <= 998001 && i < interval; i++) mat[x][++y] = num++;
		interval++;
		for (i = 0; num <= 998001 && i < interval; i++) mat[++x][y] = num++;
		for (i = 0; num <= 998001 && i < interval; i++) mat[x][--y] = num++;
		interval++;
	}
	cin >> N >> num;
	for (i = 500 - N / 2; i <= 500 + N / 2; i++) {
		for (j = 500 - N / 2; j <= 500 + N / 2; j++) {
			cout << mat[i][j] << " ";
			if (num == mat[i][j]) {
				x = i - 500 + N / 2 + 1;
				y = j - 500 + N / 2 + 1;
			}
		}
		cout << endl;
	}
	cout << x << " " << y << endl;
    return 0;
}


