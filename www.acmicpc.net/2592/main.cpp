/*
 * 2750 - 
 * https://www.acmicpc.net/problem/2750
 * Run Time : 0 MS
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
	int	num[10], i, sum, cnt, max, max_num;
	for (sum = i = 0; i < 10; i++) {
		cin >> num[i];
		sum += num[i];
	}
	sort(num, num + 10);
	max = cnt = 0;
	max_num = num[0];
	for (i = 1; i < 10; i++) {
		if (num[i] == num[i-1]) {
			cnt++;
			if (max < cnt) {
				max = cnt;
				max_num = num[i];
			}
		} else {
			cnt = 0;
		}
	}
	cout << sum / 10 << endl << max_num << endl;
    return 0;
}


