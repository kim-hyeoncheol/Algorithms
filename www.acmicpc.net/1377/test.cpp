/*
 * 2750 - 
 * https://www.acmicpc.net/problem/2750
 * Run Time : 
 */
#include <iostream>
#include <map>

using namespace std;

int main(int argc, char* argv[]) {
    int a[10000];
    int n, i, j, t, change;
    int k;

    cin >> n;

    for (i = 1; i <= n; i++)    cin >> a[i];

    for (i = 1; i <= n; i++) {
        for (k = 1; k <= n; k++)    cout << a[k] << " "; cout << endl;
        change = 0;
        for (j = 1; j <= n - i; j++) {
            if (a[j] > a[j+1]) {
                t = a[j];
                a[j] = a[j+1];
                a[j+1] = t;
                change = 1;
            }
        }
        if (change == 0)    break;
    }
    cout << i << endl;

    return 0;
}


