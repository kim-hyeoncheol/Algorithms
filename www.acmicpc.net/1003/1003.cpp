/*
 * 1003 - 피보나치 함수
 * https://www.acmicpc.net/problem/1003
 * Run Time : 
 */
#include <iostream>

using namespace std;

int zero, one;

int fibonacci(int n) {
    if (n == 0) {
        zero++;
        return 0;
    } else if (n == 1) {
        one++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main(int argc, char *argv[]) {
    int T, N;

    for (cin >> T; T > 0; T--) {
        zero = one = 0;
        cin >> N;
        fibonacci(N);
        cout << zero << " " << one << endl;
        
    }
    return 0;
}

