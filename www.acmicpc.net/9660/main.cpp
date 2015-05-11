/*
 * 9660 - 돌 게임 6
 * https://www.acmicpc.net/problem/9660
 * Run Time : 0 MS
 */
#include <iostream>

using namespace std;


int main(int argc, char* argv[])
{
    long long   N;
    cin >> N;
    switch (N % 7)
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

