#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int T, a, b, j;

    for (cin >> T; T > 0 ; T--) {
        cin >> a >> b;
        a %= 10;
        for (j = a, b = (b - 1) % 4; b > 0; b--)
            j = (j * a) % 10;
        if (j == 0) j = 10;
        cout << j << endl;
    }
    return 0;
}
