/*
 * 9661 - 돌 게임 7
 * https://www.acmicpc.net/problem/9661
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
    long long N;
    cin >> N;
    switch (N % 5)
    {
        case 0:
        case 2:
            cout << "CY" << endl;
            break;
        default:
            cout << "SK" << endl;
            break;
    }
    return 0;
}

