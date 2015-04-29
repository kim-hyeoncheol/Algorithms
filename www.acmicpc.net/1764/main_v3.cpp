/*
 * 1764 - 듣보잡
 * https://www.acmicpc.net/problem/1764
 * Run Time : 204 MS
 * vector, set_intersection() 활용 
 */
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int N, M, i;
    vector<string>    listen;
    vector<string>    see;
    vector<string>::iterator it;
    string  name;

    cin >> N >> M;
    for (i = 0; i < N; i++) {
        cin >> name;
        listen.push_back(name);
    }
    for (i = 0; i < M; i++) {
        cin >> name;
        see.push_back(name);
    }
    vector<string>    both(N+M);
    sort(listen.begin(), listen.end());
    sort(see.begin(), see.end());
    it = set_intersection(listen.begin(), listen.end(),
            see.begin(), see.end(), both.begin());
    both.resize(it - both.begin());
    cout << both.size() << endl;
    for (it = both.begin(); it != both.end(); it++)
        cout << *it << endl;
    return 0;
}


