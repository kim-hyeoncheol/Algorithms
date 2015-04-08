/*
 * 1427 - 소트인사이드
 * https://www.acmicpc.net/problem/1427
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    string  num;
    int count[10], i;

    cin >> num;
    for (i = 0; i < 10; i++)    count[i] = 0;
    for (i = 0; i < num.size(); i++)
        count[num[i] - '0']++;
    for (i = 9; i >= 0; i--)
        while (count[i] > 0) {
            cout << i;
            count[i]--;
        }
    cout << endl;
    return 0;
}


