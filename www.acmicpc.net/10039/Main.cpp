/*
 * 10039 - 평균 점수
 * https://www.acmicpc.net/problem/10039
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n, avg = 0;
    for (int i = 0; i < 5; i++) {
        cin >> n;
        if (n < 40) n = 40;
        avg += n;
    }
    cout << avg / 5 << endl;
    return 0;
}


