/*
 * 2693 - N번째 큰 수
 * https://www.acmicpc.net/problem/2693
 * Run Time : 8 MS
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
	int	T, num[10], i;
	for (cin >> T; T; T--) {
		for (i = 0; i < 10; i++)	cin >> num[i];
		sort(num, num+10);
		cout << num[7] << endl;
	}
    return 0;
}


