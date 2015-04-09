/*
 * 2986 - 파스칼
 * https://www.acmicpc.net/problem/2986
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N;
    cin >> N;
    if (N % 2 == 0) cout << N - N / 2 << endl;
    else {
        for (int i = 3; i * i <= N; i += 2) {
            if (N % i == 0) {
                cout << N - N / i << endl;
                return 0;
            }
        }
        cout << N - 1 << endl;
    }
    return 0;
}


