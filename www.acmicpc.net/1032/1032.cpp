#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    int N, i;
    string  pattern, input;

    cin >> N >> pattern;

    while (--N) {
        cin >> input;
        for (i = 0; i < pattern.size(); i++) {
            if (pattern[i] != input[i])
                pattern[i] = '?';
        }
    }
    cout << pattern << endl;
    return 0;
}
