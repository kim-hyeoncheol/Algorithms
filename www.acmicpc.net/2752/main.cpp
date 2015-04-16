/*
 * 2752 - 세수정렬
 * https://www.acmicpc.net/problem/2752
 * Run Time : 
 * 그냥 정렬문제인데, set 한 번 써 봤음.
 */
#include <iostream>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
	set<int>	num;
	int	a;
	while (cin >> a)	num.insert(a);
	for (set<int>::iterator i = num.begin(); i != num.end(); i++)
		cout << *i << " ";
	cout << endl;
    return 0;
}


