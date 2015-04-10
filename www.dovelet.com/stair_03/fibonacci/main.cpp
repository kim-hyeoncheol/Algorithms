/*
 * fibonacci
 * http://183.106.113.109/30stair/fibonacci/fibonacci.php?pname=fibonacci
 * Run Time : 
 * Accept
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int fibo[42], count = 1, n;

    fibo[0] = 0;
    fibo[1] = 1;
    for (int i = 2; i <= 41; i++)
        fibo[i] = fibo[i-2] + fibo[i-1];

    while (cin >> n) {
        if (n < 2)  break;
        cout << "Case #" << count++ << ":" << endl;
        if (n & 1)  cout << fibo[n] << ", " << fibo[n+1];
        else    cout << fibo[n+1] << ", " << fibo[n];
        cout << endl << endl;
    }
    return 0;
}


