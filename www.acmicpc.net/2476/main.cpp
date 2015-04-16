/*
 * 2750 - 
 * https://www.acmicpc.net/problem/2750
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int	dice[3];

int	getPoint() {
	if (dice[0] == dice[1] && dice[0] == dice[2])
		return (10000 + dice[0] * 1000);
	else if (dice[0] == dice[1] || dice[0] == dice[2])
		return (1000 + dice[0] * 100);
	else if (dice[1] == dice[2])
		return (1000 + dice[1] * 100);
	else {
		if (dice[0] > dice[1] && dice[0] > dice[2])
			return (dice[0] * 100);
		else if (dice[1] > dice[0] && dice[1] > dice[2])
			return (dice[1] * 100);
		else
			return (dice[2] * 100);
	}
}

int main(int argc, char* argv[]) {
	int	N, max = 0, i, point;

	for (cin >> N; N; N--) {
		for (i = 0; i < 3; i++) cin >> dice[i];
		point = getPoint();
		if (max < point)	max = point;
	}
	cout << max << endl;
    return 0;
}


