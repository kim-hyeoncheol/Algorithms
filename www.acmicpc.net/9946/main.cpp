/*
 * 9946 - 단어 퍼즐
 * https://www.acmicpc.net/problem/9946
 * Run Time : 420 MS
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    int id = 1;
    string a, b;
    while (cin >> a >> b) {
        if (a.compare("END") == 0 && b.compare("END") == 0)   break;
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        cout << "Case " << id++ << ": ";
        if (a.compare(b) == 0)
            cout << "same";
        else
            cout << "different";
        cout << endl;
    }
    return 0;
}


