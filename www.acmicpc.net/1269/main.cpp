/*
 * 1269 - 대칭 차집합
 * https://www.acmicpc.net/problem/1269
 * Run Time : 408 MS
 * STL : set_intersection
 */
#include <iostream>
#include <algorithm>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
	set<long long> s1;
	set<long long> s2;
	set<long long> intersect;
	int	A, B, i, cur;
	cin >> A >> B;
	for (i = 0; i < A; i++) {
		cin >> cur;
		s1.insert(cur);
	}
	for (i = 0; i < B; i++) {
		cin >> cur;
		s2.insert(cur);
	}
	set_intersection(
			s1.begin(), s1.end(),
			s2.begin(), s2.end(),
			inserter( intersect, intersect.begin() ) );
	cout << A + B - 2 * intersect.size() << endl;
    return 0;
}


