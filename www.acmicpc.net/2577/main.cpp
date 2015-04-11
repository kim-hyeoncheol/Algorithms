/*
 * 2577 - 숫자의 개수
 * https://www.acmicpc.net/problem/2577
 * Run Time : 
 */
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    long long   A, B, C, D;
    int num[10], i;

    cin >> A >> B >> C;
    D = A * B * C;
    string result = to_string(D);
    for (i = 0; i < 10; i++)    num[i] = 0;
    for (i = 0; i < result.size(); i++)
        num[result[i] - '0']++;
    for (i = 0; i < 10; i++)
        cout << num[i] << endl;
    return 0;
}


