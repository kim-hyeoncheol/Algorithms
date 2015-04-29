/*
 * 6321 - IBM 빼기 1
 * https://www.acmicpc.net/problem/6321
 * Run Time : 0 MS
 */
#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    int n, i, j;
    string  str;
    cin >> n;
    for (i = 1; i <= n; i++) {
        cin >> str;
        printf("String #%d\n", i);
        for (j = 0; j < str.size(); j++)
            printf("%c", (str[j] + 1 - 'A') % 26 + 'A');
        printf("\n\n");
    }
    return 0;
}


