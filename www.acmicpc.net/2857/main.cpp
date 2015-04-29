/*
 * 2857 - FBI
 * https://www.acmicpc.net/problem/2857
 * Run Time : 0 MS
 */
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    int n = 1;
    bool    isExist = false;
    string str;
    for (n = 1; cin >> str; n++) {
        if (str.find("FBI") != string::npos) {
            cout << n << " ";
            isExist = true;
        }
    }
    if (!isExist)   cout << "HE GOT AWAY!";
    cout << endl;
    return 0;
}


