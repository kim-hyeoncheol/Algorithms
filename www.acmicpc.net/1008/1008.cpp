/*
 * 1008 - A/B
 * https://www.acmicpc.net/problem/1008
 * Run Time : 
 */
#include <iostream>

using namespace std;

int e;

void divide(int A, int B) {
    e++;
    cout << A / B;
    if (e < 32)
        divide(A % B * 10, B);
}

int main(int argc, char *argv[]) {
    int A, B;

    while (cin >> A >> B) {
        e = 0;
        cout << A / B << ".";
        divide(A % B * 10, B);
        cout << endl;
    }
    return 0;
}

