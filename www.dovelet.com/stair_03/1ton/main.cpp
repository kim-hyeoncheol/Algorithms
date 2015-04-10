/*
 * http://183.106.113.109/30stair/1ton/1ton.php?pname=1ton
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n;
    while (cin >> n)
        cout << n * (n + 1) / 2 << endl;
    return 0;
}


