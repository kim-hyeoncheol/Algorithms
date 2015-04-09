/*
 * 1377 - 버블 소트
 * https://www.acmicpc.net/problem/1377
 * Run Time : Time Out
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    vector <int>   bubble;
    vector <int>::iterator  it;
    int N, cur, max, i;

    while (cin >> N) {
        for (max = i = 0; i < N; i++) {
            cin >> cur;
            it = upper_bound(bubble.begin(), bubble.end(), cur);
            if (max < bubble.end() - it)  max = bubble.end() - it;

            bubble.insert(it, cur);
        }
        cout << max + 1 << endl;
        bubble.clear();
    }
    return 0;
}


