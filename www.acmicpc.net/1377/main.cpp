/*
 * 1377 - 버블 소트
 * https://www.acmicpc.net/problem/1377
 * Run Time : 68 MS
 */
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    vector <int>   bubble;
    vector <int>   sorted;
    vector <int>::iterator  it, it2;
    int N, cur, max, i;

    while (cin >> N) {
        for (i = 0; i < N; i++) {
            cin >> cur;
            bubble.push_back(cur);
            sorted.push_back(cur);
        }
        sort(sorted.begin(), sorted.end());

        max = 0;
        for (it = bubble.begin(); it != bubble.end(); it++) {
            it2 = upper_bound(sorted.begin(), sorted.end(), *it);
            cur = 1 + (it - bubble.begin()) - (it2 - sorted.begin());
            if (max < cur)  max = cur;
        }
        cout << max + 1 << endl;
        bubble.clear();
        sorted.clear();
    }
    return 0;
}


