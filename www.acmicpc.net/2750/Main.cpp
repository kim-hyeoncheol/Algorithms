/*
 * 2750 - 수 정렬하기
 * https://www.acmicpc.net/problem/2750
 * Run Time : 4 MS
 */
#include <iostream>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
    set<int>    result;
    int N, num;
    for (cin >> N; N; N--) {
        cin >> num;
        result.insert(num);
    }
    for (set<int>::iterator i = result.begin(); i != result.end(); i++)
        cout << *i << endl;
    return 0;
}


