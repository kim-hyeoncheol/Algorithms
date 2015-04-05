/*
 * 2010 - 플러그
 * https://www.acmicpc.net/problem/2010
 * Run Time :
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	N, multi_tab, plug = 0;
	for (cin >> N; N; N--) {
		cin >> multi_tab;
		plug += multi_tab - 1;
	}
	cout << plug + 1 << endl;
    return 0;
}

