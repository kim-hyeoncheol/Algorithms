/*
 * 1919 - 애너그램 만들기
 * https://www.acmicpc.net/problem/1919
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int a[26], b[26], i, count = 0;
    string str;
    
    for (i = 0; i < 26; i++)    a[i] = b[i] = 0;
    cin >> str;
    for (i = 0; i < str.size(); i++) a[str[i] - 'a']++;
    cin >> str;
    for (i = 0; i < str.size(); i++) b[str[i] - 'a']++;

    for (i = 0; i < 26; i++) {
        if (a[i] > b[i])    count += a[i] - b[i];
        else                count += b[i] - a[i];
    }
    cout << count << endl;
    return 0;
}


