/*
 * 1920 - 수 찾기
 * https://www.acmicpc.net/problem/1920
 * Run Time : 864 MS
 * 왜 이렇게 오래 걸리지???
 */
#include <iostream>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
    int N, M, cur;
    set<int>    set1;
    set<int>::iterator  it;

    for (cin >> N; N; N--) {
        cin >> cur;
        set1.insert(cur);
    }
    for (cin >> M; M; M--) {
        cin >> cur;
        it = set1.find(cur);
        cout << (it != set1.end()) << endl;
    }
    return 0;
}


