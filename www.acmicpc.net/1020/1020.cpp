#include <iostream>

using namespace std;

int line[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 5};

int getNextLines(string str, int next) {
    int lines = 0;
    int upper = 0;

    for (int i = str.size() - 1; i >= 0; i--) {
        lines += line[(upper + next % 10 + str[i] - '0') % 10] - line[str[i] - '0'];
        upper = (upper + next % 10 + str[i] - '0') / 10;
        next /= 10;
        if (upper == 0 && next == 0) break;
    }
    return lines;
}

int main(int argc, char *argv[]) {
    string  str;
    int i;

    cin >> str;
    for (i = 1; getNextLines(str, i); i++);
    cout << i << endl;

    return 0;
}
