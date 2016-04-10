/*
 * 1912 - 부분합
 * https://www.acmicpc.net/problem/1912
 * Run Time : 24 MS
 *
 * https://en.wikipedia.org/wiki/Maximum_subarray_problem
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int n, x;
	int max_ending_here, max_so_far;
	cin >> n;
	cin >> x;
	max_ending_here = max_so_far = x;
	for (int i = 1; i < n; i++) {
		cin >> x;
		max_ending_here = max(x, max_ending_here + x);
		max_so_far = max(max_so_far, max_ending_here);
		//cout << x << " : " << max_ending_here << ", " << max_so_far << endl;
	}
	cout << max_so_far << endl;
    return 0;
}


