/*
 * http://183.106.113.109/30stair/insubunE/insubunE.php?pname=insubunE
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int a, b, c, d;
    bool    possible;

    while (cin >> a >> b) {
        possible = false;
        for (c = 1; c * c <= b; c++) {
            d = b / c;
            if (b == c * d && a == c + d) {
                possible = true;
                break;
            }
        }
        if (possible)   cout << "(x-" << c << ")(x-" << d << ")" << endl;
        else cout << "impossible" << endl;
    }
    return 0;
}


