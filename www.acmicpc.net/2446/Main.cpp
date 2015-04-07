/*
 * 2446 - 별찍기 - 9
 * https://www.acmicpc.net/problem/2446
 * Run Time : 
 */
#include <iostream>

using namespace std;

void print_star(int space, int star) {
    while (space--) cout << " ";
    while (star--) cout << "*";
    cout << endl;
}

int main(int argc, char* argv[]) {
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        print_star(i, 2 * (N-i) - 1);
    for (i--; i--;)
        print_star(i, 2 * (N-i) - 1);
    return 0;
}


