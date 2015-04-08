/*
 * 3034 - 앵그리 창영
 * https://www.acmicpc.net/problem/3034
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, W, H;
    cin >> N >> W >> H;
    W = W * W + H * H;
    while (N--) {
        cin >> H;
        if (H * H > W)  cout << "NE" << endl;
        else    cout << "DA" << endl;

    }
    return 0;
}


