/*
 * 1764 - 듣보잡
 * https://www.acmicpc.net/problem/1764
 * Run Time : 244 MS
 * map 활용 
 */
#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(int argc, char* argv[]) {
    int N, M, i, count = 0;
    map<string, int>    listen;
    map<string, int>    both;
    string  name;

    cin >> N >> M;
    for (i = 0; i < N; i++) {
        cin >> name;
        listen[name] = 1;
    }
    for (i = 0; i < M; i++) {
        cin >> name;
        if (listen[name]) {
            count++;
            both[name] = 1;
        }
    }
    cout << count << endl;
    for (map<string, int>::iterator it = both.begin(); it != both.end(); it++)
        cout << it->first << endl;
    return 0;
}


