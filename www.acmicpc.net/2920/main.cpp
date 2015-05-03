/*
 * 2920 - 음계
 * https://www.acmicpc.net/problem/2920
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int num[8], i, count = 0;
    for (i = 0; i < 8; i++) cin >> num[i];
    for (i = 1; i < 8; i++) {
        if (num[i] > num[i-1])  count++;
        else    count--;
    }
    if (count == 7) cout << "ascending" << endl;
    else if (count == -7)   cout << "descending" << endl;
    else cout << "mixed" << endl;
    return 0;
}


