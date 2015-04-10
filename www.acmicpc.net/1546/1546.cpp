/*
 * 1546 - 평균
 * https://www.acmicpc.net/problem/1546
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N, sum_point = 0, max_point = 0, point;

    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> point;
        sum_point += point;
        if (max_point < point)  max_point = point;
    }
    float   avg = (float)sum_point * (float)100 / (float)N / (float)max_point;
    cout << fixed;
    cout.setf(ios::showpoint);
    cout.precision(2);
    cout << avg << endl;
    return 0;
}
