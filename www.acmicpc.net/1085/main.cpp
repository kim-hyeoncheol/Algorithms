/*
 * 1085 - 직사각형에서 탈출
 * https://www.acmicpc.net/problem/1085
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int x, y, w, h, min = 1000;
    cin >> x >> y >> w >> h;
    if (min > x)    min = x;
    if (min > y)    min = y;
    if (min > w - x)    min = w - x;
    if (min > h - y)    min = h - y;
    cout << min << endl;
    return 0;
}


