/*
 * 1377 - 버블 소트
 * https://www.acmicpc.net/problem/1377
 * Run Time : Wrong Answer
 */
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char* argv[]) {
    map <int, int> bubble;
    int N, cur, max, i;

    while (cin >> N) {
        for (i = 0; i < N; i++) {
            cin >> cur;
            bubble[cur] = i;
        }
        max = i = 0;
        for (map <int, int>::iterator it = bubble.begin(); it != bubble.end(); it++, i++) {
            //cout << it->first << ", " << it->second << endl;
            if (max < (it->second - i))  max = (it->second - i);
        }
        cout << max + 1 << endl;
        bubble.clear();
    }
    return 0;
}


