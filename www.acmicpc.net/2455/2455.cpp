/*
 * 2455 - 지능형 기차
 * https://www.acmicpc.net/problem/2455
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int	a, b, load = 0, max_load = 0;

	for (int i = 0; i < 4; i++) {
		cin >> a >> b;
		load = load - a + b;
		if (max_load < load)	max_load = load;
	}
	cout << max_load << endl;
	return 0;
}

