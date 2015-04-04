#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N;
    cin >> N;
    for (int i = 0; i < N; i++) {
        cout.width(i);
        cout.fill(' ');
        cout << "";
        cout.width(2 * (N-i) - 1);
        cout.fill('*');
        cout << "" << endl;
    }
    return 0;
}
