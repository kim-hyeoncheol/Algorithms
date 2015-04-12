/*
 * 2774 - 아름다운 수
 * https://www.acmicpc.net/problem/2774
 * Run Time : 
 */
#include <iostream>
#include <set>

using namespace std;

int main(int argc, char* argv[]) {
    int T, i;
    set<char>   num;
    string X;
    for (cin >> T; T; T--) {
        cin >> X;
        for (i = 0; i < X.size(); i++)
            num.insert(X[i]);
        cout << num.size() << endl;
        num.clear();
    }
    return 0;
}


