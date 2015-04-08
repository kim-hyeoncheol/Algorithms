/*
 * 2490 - 윷놀이
 * https://www.acmicpc.net/problem/2490
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int sum, num;

    for (int i = 0; i < 3; i++) {
        sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> num;
            sum += num;
        }
        switch (4 - sum) {
            case 0:
                cout << "E" << endl;
                break;
            case 1:
                cout << "A" << endl;
                break;
            case 2:
                cout << "B" << endl;
                break;
            case 3:
                cout << "C" << endl;
                break;
            case 4:
                cout << "D" << endl;
                break;
        }
    }
    return 0;
}


