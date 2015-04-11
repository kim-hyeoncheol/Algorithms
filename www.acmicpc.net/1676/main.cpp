/*
 * 1676 - 팩토리얼
 * https://www.acmicpc.net/problem/1676
 * Run Time : 
 */
#include <iostream>

using namespace std;

int get_5s(int n) {
    int result;
    for (result = 0; n % 5 == 0; n /= 5)
        result++;
    return result;
}

int main(int argc, char* argv[]) {
    int n, i, count = 0;
    cin >> n;
    for (i = 5; i <= n; i++)
        count += get_5s(i);
    cout << count << endl;
    return 0;
}


