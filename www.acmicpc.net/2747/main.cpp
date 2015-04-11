/*
 * 2747 - 피보나치 수
 * https://www.acmicpc.net/problem/2747
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int fibo[46], i;
    fibo[0] = 0;
    fibo[1] = 1;
    for (i = 2; i < 46; i++)    fibo[i] = fibo[i-2] + fibo[i-1];
    cin >> i;
    cout << fibo[i] << endl;
    return 0;
}


