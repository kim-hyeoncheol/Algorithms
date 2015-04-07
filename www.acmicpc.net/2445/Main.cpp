/*
 * 2445 - 별찍기 - 8
 * https://www.acmicpc.net/problem/2445
 * Run Time : 
 */
#include <iostream>

using namespace std;

void print_star(int star1, int space, int star2) {
    while (star1--) cout << "*";
    while (space--) cout << " ";
    while (star2--) cout << "*";
    cout << endl;
}

int main(int argc, char* argv[]) {
    int N, i;
    cin >> N;
    for (i = 0; i < N; i++)
        print_star(i+1, 2 * (N-i-1), i+1);
    for (i--; i--;)
        print_star(i+1, 2 * (N-i-1), i+1);
    return 0;
}


