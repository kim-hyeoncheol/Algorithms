/*
 * 2484 - 주사위 네개
 * https://www.acmicpc.net/problem/2484
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int	N, total_max = 0, max = 0, point, a, b, c, d;
    for (cin >> N; N; N--) {
        cin >> a >> b >> c >> d;
        if (a == b && a == c && a == d) {
            point = 50000 + a * 5000;
        } else if (a == b && a == c) {
            point = 10000 + a * 1000;
        } else if (a == b && a == d) {
            point = 10000 + a * 1000;
        } else if (a == c && a == d) {
            point = 10000 + a * 1000;
        } else if (b == c && b == d) {
            point = 10000 + b * 1000;
        } else if (a == b && c == d) {
            point = 2000 + a * 500 + c * 500;
        } else if (a == c && b == d) {
            point = 2000 + a * 500 + b * 500;
        } else if (a == d && b == c) {
            point = 2000 + a * 500 + b * 500;
        } else if (a == b) {
            point = 1000 + a * 100;
        } else if (a == c) {
            point = 1000 + a * 100;
        } else if (a == d) {
            point = 1000 + a * 100;
        } else if (b == c) {
            point = 1000 + b * 100;
        } else if (b == d) {
            point = 1000 + b * 100;
        } else if (c == d) {
            point = 1000 + c * 100;
        } else {
            max = a;
            if (max < b)    max = b;
            if (max < c)    max = c;
            if (max < d)    max = d;
            point = max * 100;
        }
        if (total_max < point)    total_max = point;
    }
    cout << total_max << endl;
    return 0;
}


