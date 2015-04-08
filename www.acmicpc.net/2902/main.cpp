/*
 * 2902 - KMP는 왜 KMP일까?
 * https://www.acmicpc.net/problem/2902
 * Run Time : 
 */
#include <iostream>
#include <cctype>

using namespace std;

string short_name(string s) {
    string name = "";
    for (int i = 0; i < s.size(); i++)
        if (isupper(s[i]))  name += s[i];
    return name;
}

int main(int argc, char* argv[]) {
    string  long_name;
    cin >> long_name;
    cout << short_name(long_name);
    return 0;
}


