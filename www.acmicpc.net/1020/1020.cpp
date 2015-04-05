/**
 * 1020 - 디지털 카운터
 * https://www.acmicpc.net/problem/1020
 * RunTime : Time out
 */
#include <iostream>

using namespace std;

int line[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 5};
int N;
string  str;

int getNextLines(int next) {
    int lines = 0, upper = 0;

    for (int i = N - 1; i >= 0; i--) {
        lines += line[(upper + next % 10 + str[i] - '0') % 10] - line[str[i] - '0'];
        upper = (upper + next % 10 + str[i] - '0') / 10;
        next /= 10;
        if (upper == 0 && next == 0) break;
    }
    return lines;
}

bool check_type1(char num) {
    int i;
    for (i = 0; i < N; i++) {
        if (str[i] != num)  break;
    }
    return (i == N);
}

void print_type1() {
    cout << 1;
    while (N--) cout << 0;
    cout << endl;
}

bool check_type2() {
    int one = 0, seven = 0;
    for (int i = 0; i < N; i++) {
        switch (str[i]) {
            case '1':
                one++;
                break;
            case '7':
                seven++;
                break;
            default:
                return false;
        }
    }
    return (one > 0 && seven == 1);
}

void print_type2() {
    int i;
    for (i = 0; i < N; i++)
        if (str[i] == '7')  break;
    if (i > 0) {
        cout << 54;
        for (i++; i < N; i++)
            cout << 0;
        cout << endl;
    } else {
        cout << 4;
        for (i = 2; i < N; i++)
            cout << 0;
        cout << 6 << endl;
    }
}

bool check_type3() {
    int zero = 0, six = 0, eight = 0;
    for (int i = 0; i < N; i++) {
        switch (str[i]) {
            case '0':
                zero++;
                break;
            case '6':
                six++;
                break;
            case '8':
                eight++;
                break;
            default:
                return false;
        }
    }
    return (eight == N - 1);
}

void print_type3() {
    int i;
    for (i = 0; i < N; i++)
        if (str[i] == '0')  break;
    if (i < N) {
        cout << 6;
        for (i++; i < N; i++)
            cout << 0;
        cout << endl;
        return;
    }
    for (i = 0; i < N; i++)
        if (str[i] == '6')  break;
    if (i < N - 1) {
        cout << 12;
        for (i += 2; i < N; i++)
            cout << 0;
        cout << endl;
        return;
    } else {
        cout << 2;
        for (i = 2; i < N; i++)
            cout << 0;
        cout << 2 << endl;
    }
}

int main(int argc, char *argv[]) {
    int i;

    while (cin >> str) {
        N = str.size();

        if (check_type1('1') || check_type1('8')) {
            print_type1();
        } else if (check_type2()) {
            print_type2();
        } else if (check_type3()) {
            print_type3();
        } else {
            switch (str[N - 1]) {
                case '0':
                    cout << 6 << endl;
                    break;
                case '2':
                    cout << 1 << endl;
                    break;
                case '3':
                    cout << 2 << endl;
                    break;
                case '5':
                    cout << 4 << endl;
                    break;
                default:
                    for (i = 1; getNextLines(i); i++);
                    cout << i << endl;
            }
        }
    }
    return 0;
}
