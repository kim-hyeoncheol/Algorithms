/*
 * 2309 - 일곱 난쟁이
 * https://www.acmicpc.net/problem/2309
 * Run Time : 0 MS
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
    int height[9], sum = 0, i, j;
    for (i = 0; i < 9; i++) {
        cin >> height[i];
        sum += height[i];
    }
    sort(height, height + 9);
    for (i = 0; i < 9; i++)
        for (j = i + 1; j < 9; j++)
            if (sum - 100 == height[i] + height[j]) {
                height[i] = height[j] = 0;
                i = j = 9;
            }
    for (i = 0; i < 9; i++)
        if (height[i] > 0)  cout << height[i] << endl;
    return 0;
}


