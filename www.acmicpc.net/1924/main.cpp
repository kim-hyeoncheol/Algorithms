/*
 * 1924 - 2007년
 * https://www.acmicpc.net/problem/1924
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

string day[7] = { "SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT" };
int	date[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main(int argc, char* argv[]) {
	int	x, y, total, i;
	while (cin >> x >> y) {
		total = 0;
		for (i = 0; i < x - 1; i++)
			total += date[i];
		total += y;
		cout << day[total % 7] << endl;
	}
    return 0;
}


