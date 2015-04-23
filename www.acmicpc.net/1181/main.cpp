/*
 * 1181 - 단어 정렬
 * https://www.acmicpc.net/problem/1181
 * Run Time : 204 MS
 * STL - set, string, sort
 */
#include <iostream>
#include <algorithm>
#include <set>
#include <string>

using namespace std;

struct classcomp {
	bool operator() (const string& first, const string& second) const
	{
		return (first.size() == second.size() ?
				(first < second) : (first.size() < second.size()));
	}
};

int main(int argc, char* argv[]) {
	set<string, classcomp>	item;
	string str;
	int	N;
	for (cin >> N; N; N--) {
		cin >> str;
		item.insert(str);
	}
	for (set<string>::iterator it = item.begin(); it != item.end(); it++)
		cout << *it << endl;
	return 0;
}


