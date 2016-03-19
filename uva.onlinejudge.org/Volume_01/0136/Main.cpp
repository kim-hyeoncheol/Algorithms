/*
 * 136 - Ugly Numbers
 * https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=72
 * Run Time : 0.000
 */
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;

int main(int argc, char* argv[]) {

	priority_queue<long, vector<long>, greater<long>> ugly;
	long cur = 0;

	ugly.push(1);
	for (int i = 0; i < 1500; i++) {
		while (cur == ugly.top()) ugly.pop();
		cur = ugly.top();
		ugly.pop();
		ugly.push(cur * 2);
		ugly.push(cur * 3);
		ugly.push(cur * 5);
	}
	cout << "The 1500'th ugly number is " << ugly.top() << "." << endl;
    return 0;
}


