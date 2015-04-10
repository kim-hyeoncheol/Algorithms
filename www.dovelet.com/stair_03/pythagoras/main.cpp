/*
 * http://183.106.113.109/30stair/pythagoras/pythagoras.php?pname=pythagoras
 * Run Time : 
 * int 로는 안 풀림.
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
    long long a, b, c, tmp;
    bool    possible;
    while (cin >> c) {
        possible = false;
        for (b = c - 1; b > 0; b--) {
            tmp = (c - b) * (c + b);
            a = (long long)sqrtl((long double)tmp);
            if (a * a == tmp) {
                possible = true;
                break;
            }
            if (a > b)  break;
        }
        if (possible)   cout << a << " " << b << endl;
        else    cout << "impossible" << endl;
    }
    return 0;
}


