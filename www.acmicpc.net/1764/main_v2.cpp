/*
 * 1764 - 듣보잡
 * https://www.acmicpc.net/problem/1764
 * Run Time : 200 MS
 * set, vector 활용.
 */
#include <iostream>
#include <string>
#include <algorithm>
#include <set>
#include <vector>

using namespace std;

int main(int argc, char* argv[]) {
    int N, M, i, count = 0;
    set<string>    listen;
    vector<string>    both;
    string  name;

    cin >> N >> M;
    for (i = 0; i < N; i++) {
        cin >> name;
        listen.insert(name);
    }
    for (i = 0; i < M; i++) {
        cin >> name;
        if (listen.count(name) > 0) {
            count++;
            both.push_back(name);
        }
    }
    sort(both.begin(), both.end());
    cout << count << endl;
    for (vector<string>::iterator it = both.begin(); it != both.end(); it++)
        cout << *it << endl;
    return 0;
}


