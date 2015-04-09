/*
 * 2750 - 
 * https://www.acmicpc.net/problem/2750
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	T, i, sum, min, cur;

	for (cin >> T; T; T--) {
		sum = 0, min = 100;
		for (i = 0; i < 7; i++) {
			cin >> cur;
			if (cur % 2)	continue;
			sum += cur;
			if (min > cur)	min = cur;
		}
		cout << sum << " " << min << endl;
	}
    return 0;
}


