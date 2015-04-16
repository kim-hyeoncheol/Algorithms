/*
 * 2587 - 대표값2
 * https://www.acmicpc.net/problem/2587
 * Run Time : 0 MS
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
	int	num[5], i, sum = 0;
	for (i = 0; i < 5; i++) cin >> num[i];
	for (i = 0; i < 5; i++) sum += num[i];
	sort(num, num + 5);
	cout << sum / 5 << endl << num[2] << endl;
    return 0;
}


