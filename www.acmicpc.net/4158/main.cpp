/*
 * 4158 - CD
 * https://www.acmicpc.net/problem/4158
 * Run Time : 
 *
 *
 * Time Out (다음 모든 경우에 Time Out)
 *  1. set 자료구조 이용
 *  2. array, linear search (이전에 찾은 아이템의 인덱스부터)
 *  3. array, binary search (이전에 찾은 아이템의 인덱스부터)
 *  뭐지??? 입력이 오름차순이고 백만개 이하면 Time Out 일리가 없는데...
 *
 *  ==> cin 대신 scanf 로 바꾸면 Accept ㅡㅡ;
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int cd[1000000];
    int N, M, cur, i, j, count;
    while (cin >> N >> M) {
        if (N == 0 && M == 0)   break;
        for (i = 0; i < N; i++) cin >> cd[i];
        for (count = i = j = 0; j < M; j++) {
            cin >> cur;
            while (i < N && cd[i] < cur) i++;
            if (cd[i] == cur)   count++;
        }
        cout << count << endl;
    }
    return 0;
}


