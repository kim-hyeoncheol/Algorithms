/*
 * 2605 - 줄 세우기
 * https://www.acmicpc.net/problem/2605
 * Run Time : 0 MS
 * simulation
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	line[100], n, id, i, j, tmp;
	cin >> n;
	for (i = 0; i < n; i++)	line[i] = i+1;
	for (i = 0; i < n; i++)	{
		cin >> id;
		for (j = 0; j < id; j++) {
			tmp = line[i - j];
			line[i - j] = line[i - j - 1];
			line[i - j - 1] = tmp;
		}
	}
	for (i = 0; i < n; i++)
		cout << line[i] << " ";
	cout << endl;
    return 0;
}


