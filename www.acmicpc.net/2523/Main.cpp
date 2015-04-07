/*
 * 2523 - 별찍기 - 13
 * https://www.acmicpc.net/problem/2523
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
        print_star(0, i+1);
    for (i--; i--;)
        print_star(0, i+1);
    return 0;
}


