/*
 * 2869 - 달팽이는 올라가고 싶다
 * https://www.acmicpc.net/problem/2869
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    long long A, B, V, days;
    cin >> A >> B >> V;
    days = (V - A) / (A - B);
    if ((V - A) % (A - B) == 0)  days++;
    else    days += 2;
    cout << days << endl;
    return 0;
}


