/*
 * 1225 - 이상한 곱셈
 * https://www.acmicpc.net/problem/1225
 * Run Time : 312 MS
 *
 * 숫자의 길이가 최대 10,000 자리임.
 */
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    string  A, B;
    long long result = 0;
    int i, j;
    cin >> A >> B;
    for (i = 0; i < A.size(); i++)
        for (j = 0; j < B.size(); j++)
            result += (A[i] - '0') * (B[j] - '0');
    cout << result << endl;
    return 0;
}


