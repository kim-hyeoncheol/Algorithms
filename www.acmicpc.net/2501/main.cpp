/*
 * 2501 - 약수 구하기
 * https://www.acmicpc.net/problem/2501
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, K;
    cin >> N >> K;
    for (int i = 1; i <= N; i++)
        if (N % i == 0) {
            K--;
            if (K == 0) {
                cout << i << endl;
                return 0;
            }
        }
    cout << 0 << endl;
    return 0;
}


