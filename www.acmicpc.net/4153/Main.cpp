/*
 * 4153 - 직각삼각형
 * https://www.acmicpc.net/problem/4153
 * Run Time : 
 */
#include <iostream>

using namespace std;

bool is_right_angle(int a, int b, int c) {
    return (a * a == b * b + c * c);
}

int main(int argc, char* argv[]) {
    int a, b, c;
    while (cin >> a >> b >> c) {
        if (a == 0 && b == 0 && c == 0) break;

        if (is_right_angle(a, b, c) || is_right_angle(b, c, a) || is_right_angle(c,a, b))
            cout << "right" << endl;
        else cout << "wrong" << endl;
    }
    return 0;
}


