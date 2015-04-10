/*
 * http://183.106.113.109/30stair/reduction/reduction.php?pname=reduction
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int a, b, c, d, r1, r2, tmp;
    while (cin >> a >> b >> c >> d) {
        if (a > b) {
            tmp = a;
            a = b;
            b = tmp;
        }
        if (c > d) {
            tmp = c;
            c = d;
            d = tmp;
        }
        r1 = c * 100 / a;
        r2 = d * 100 / b;
        if (r1 > r2)    r1 = r2;
        if (r1 > 100)   r1 = 100;
        cout << r1 << "%" << endl;
    }
    return 0;
}


