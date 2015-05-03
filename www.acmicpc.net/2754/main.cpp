/*
 * 2754 - 학점계산
 * https://www.acmicpc.net/problem/2754
 * Run Time : 0 MS
 */
#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char* argv[]) {
    double	total;
    string	grade;

    cin >> grade;
    switch (grade[0]) {
        case 'A':
            switch (grade[1]) {
                case '+':
                    total = 4.3;
                    break;
                case '0':
                    total = 4.0;
                    break;
                case '-':
                    total = 3.7;
                    break;
            }
            break;
        case 'B':
            switch (grade[1]) {
                case '+':
                    total = 3.3;
                    break;
                case '0':
                    total = 3.0;
                    break;
                case '-':
                    total = 2.7;
                    break;
            }
            break;
        case 'C':
            switch (grade[1]) {
                case '+':
                    total = 2.3;
                    break;
                case '0':
                    total = 2.0;
                    break;
                case '-':
                    total = 1.7;
                    break;
            }
            break;
        case 'D':
            switch (grade[1]) {
                case '+':
                    total = 1.3;
                    break;
                case '0':
                    total = 1.0;
                    break;
                case '-':
                    total = 0.7;
                    break;
            }
            break;
        case 'F':
            total = 0.0;
            break;
    }
    printf("%.1f\n", total);
    return 0;
}


