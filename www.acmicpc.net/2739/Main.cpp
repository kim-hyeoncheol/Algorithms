/*
 * 2739 - 구구단
 * https://www.acmicpc.net/problem/2739
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N;
    cin >> N;
    for (int i = 1; i < 10; i++)
        cout << N << " * " << i << " = " << N * i << endl;
    return 0;
}


