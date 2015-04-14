/*
 * 4158 - CD
 * https://www.acmicpc.net/problem/4158
 * Run Time : 688 MS
 * Accept
 *  짜증나는 문제
 *  같은 알고리즘으로 cin 대신 scanf 쓰니까 Accept
 *  입력이 오름차순이라는게 포인트!
 */
#include <stdio.h>

int main(int argc, char* argv[]) {
    int cd[1000000];
    int N, M, cur, i, j, count;
    while (scanf("%d %d\n", &N, &M)) {
        if (N == 0 && M == 0)   break;
        for (i = 0; i < N; i++) scanf("%d\n", &cd[i]);
        for (count = i = j = 0; j < M; j++) {
            scanf("%d\n", &cur);
            while (i < N && cd[i] < cur) i++;
            if (cd[i] == cur)   count++;
        }
        printf("%d\n", count);
    }
    return 0;
}


