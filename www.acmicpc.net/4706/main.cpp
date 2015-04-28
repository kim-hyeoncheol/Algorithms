/*
 * 4706 - 쌍둥이 역설
 * https://www.acmicpc.net/problem/4706
 * Run Time : 0 MS
 */
#include <iostream>
#include <cmath>
#include <cstdio>

using namespace std;

int main(int argc, char* argv[]) {
    double  ta, tb;
    while (cin >> ta >> tb) {
        if (ta == 0.0 && tb == 0.0) break;
        printf("%.3f\n", sqrt((ta * ta - tb * tb) / ta / ta));
    }
    return 0;
}


