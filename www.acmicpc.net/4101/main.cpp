/*
 * 4101 - 크냐?
 * https://www.acmicpc.net/problem/4101
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int A, B;
    while (cin >> A >> B) {
        if (A == 0 && B == 0)   break;
        if (A > B)  cout << "Yes" << endl;
        else    cout << "No" << endl;
    }
    return 0;
}


