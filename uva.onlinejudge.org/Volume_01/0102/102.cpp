/*
 * 102 - Ecological Bin Packing
 * http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=38
 * Run Time : 0.112
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int B1, G1, C1;
    int B2, G2, C2;
    int B3, G3, C3;
    int moves;
    string  bottles;

    while (cin  >> B1 >> G1 >> C1
                >> B2 >> G2 >> C2
                >> B3 >> G3 >> C3) {
        moves = 0;
        if (moves < B1 + C2 + G3) {
            moves = B1 + C2 + G3;
            bottles = "BCG";
        }
        if (moves < B1 + G2 + C3) {
            moves = B1 + G2 + C3;
            bottles = "BGC";
        }
        if (moves < C1 + B2 + G3) {
            moves = C1 + B2 + G3;
            bottles = "CBG";
        }
        if (moves < C1 + G2 + B3) {
            moves = C1 + G2 + B3;
            bottles = "CGB";
        }
        if (moves < G1 + B2 + C3) {
            moves = G1 + B2 + C3;
            bottles = "GBC";
        }
        if (moves < G1 + C2 + B3) {
            moves = G1 + C2 + B3;
            bottles = "GCB";
        }
        cout << bottles << " " << 
            B1 + G1 + C1 + B2 + G2 + C2 + B3 + G3 + C3 - moves << endl;
    }
    return 0;
}

