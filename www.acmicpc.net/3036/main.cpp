/*
 * 3036 - 링
 * https://www.acmicpc.net/problem/3036
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;

int get_gcd(int a, int b) {
    if (a % b == 0) return b;
    return get_gcd(b, a % b); 
}

int main(int argc, char* argv[]) {
    int N, ring[100], i, gcd;
    cin >> N;
    for (i = 0; i < N; i++) cin >> ring[i];
    for (i = 1; i < N; i++) {
        gcd = get_gcd(ring[0], ring[i]);
        cout << ring[0] / gcd << "/" << ring[i] / gcd << endl;
    }
    return 0;
}


