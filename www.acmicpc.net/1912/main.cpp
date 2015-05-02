/*
 * 1912 - 부분합
 * https://www.acmicpc.net/problem/1912
 * Run Time : 24 MS
 *
 * 부분합이 음수가 되는 순간의 인덱스에서 앞 부분은 모두 무시하면 된다.
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int n, item, sum, max;
    sum = max = 0;
    for (cin >> n; n; n--) {
        cin >> item;
        sum += item;
        if (sum < 0)    sum = 0;
        if (max < sum)  max = sum;
    }
    cout << max << endl;

    return 0;
}


