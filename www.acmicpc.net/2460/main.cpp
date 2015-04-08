/*
 * 2460 - 지능형 기차 2
 * https://www.acmicpc.net/problem/2460
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int a, b, sum = 0, max = 0;

    while (cin >> a >> b) {
        sum += b - a;
        if (max < sum)  max = sum;
    }
    cout << max << endl;
    return 0;
}


