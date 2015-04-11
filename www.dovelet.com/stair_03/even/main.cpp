/*
 * http://183.106.113.109/30stair/even/even.php?pname=even
 * Run Time : 
 * 약수가 홀수개면, 완전제곱수
 * 약수가 짝수개면, 완전제곱수가 아닌 수의 갯수를 세면 된다.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    long long A, B, a, b;

    while (cin >> A >> B) {
        a = (long long)sqrtl((long double)(A - 1.0)) + 1;
        b = (long long)sqrtl((long double)(B));
        cout << (B - A + 1) - (b - a + 1) << endl;
    }
    return 0;
}


