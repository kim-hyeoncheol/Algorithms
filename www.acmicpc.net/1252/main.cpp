/*
 * 1252 - 이진수 덧셈
 * https://www.acmicpc.net/problem/1252
 * Run Time : 
 * 출력은 반드시 1로 시작해야 한다면서, 입력은 0으로 시작할 수도 있단다. ㅡㅡ;
 */
#include <iostream>

using namespace std;

string  add(string a, string b) {
    if (a.size() < b.size())    return add(b, a);
    int i, j;
    for (i = 1; i <= a.size(); i++) {
        if (b.size() < i)   break;
        a[a.size() - i] += b[b.size() - i] - '0';
    }
    j = 0;
    for (i = a.size() - 1; i >= 0; i--) {
        switch (a[i] + j) {
            case '3':
                a[i] = '1';
                j = 1;
                break;
            case '2':
                a[i] = '0';
                j = 1;
                break;
            case '1':
                a[i] = '1';
                j = 0;
                break;
            case '0':
                a[i] = '0';
                j = 0;
                break;
        }
    }
    if (j == 1) return ("1" + a);
    else {
        for (i = 0; i < a.size(); i++)
            if (a[i] == '1')    break;
        if (i == a.size())  return "0";
        else    return a.substr(i);
    }
}

int main(int argc, char* argv[]) {
    string  A, B;
    while (cin >> A >> B) {
        cout << add(A, B) << endl;
    }
    return 0;
}


