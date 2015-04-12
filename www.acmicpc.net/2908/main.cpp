/*
 * 2908 - 상수
 * https://www.acmicpc.net/problem/2908
 * Run Time : 
 */
#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string A, B;

    while (cin >> A >> B) {
        reverse(A.begin(), A.end());
        reverse(B.begin(), B.end());
        if (A.compare(B) > 0)   cout << A << endl;
        else    cout << B << endl;
    }
    return 0;
}


