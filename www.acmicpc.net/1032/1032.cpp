/*
 * 1032 - 명령 프롬프트
 * https://www.acmicpc.net/problem/1032
 * Run Time : 
 */
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
