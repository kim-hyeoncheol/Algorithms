/*
 * 10610 - 30
 * https://www.acmicpc.net/problem/10610
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    string  str;
    int count[10], i, sum;
    while (cin >> str) {
        for (i = 0; i < 10; i++)    count[i] = 0;
        for (i = 0; i < str.size(); i++) count[str[i] - '0']++;
        for (sum = i = 0; i < 10; i++)  sum += i * count[i];

        if (count[0] > 0 && sum % 3 == 0) {
            for (i = 9; i >= 0; i--)
                while (count[i]--)  cout << i;
            cout << endl;
        }
        else cout << "-1" << endl;
    }
    return 0;
}


