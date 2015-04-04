/*
 * Run Time : 0.688
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_cycle_len(int n);
int get_maximum_cycle_len(int i, int j);
int max(int i, int j);
int min(int i, int j);

int main(int argc, char** argv) {

    char    input[1024];
    int     i, j;

    while ( fgets(input, 1024, stdin) ) {
        sscanf(input, "%d %d", &i, &j);
        printf("%d %d %d\n", i, j, get_maximum_cycle_len(min(i, j), max(i, j)));
    }
    return 0;
}

int get_maximum_cycle_len(int i, int j) {
    int maximun_cycle_len = 0;

    for (; i <= j; i++) {
        maximun_cycle_len = max(maximun_cycle_len, get_cycle_len(i));
    }
    return maximun_cycle_len;
}

int get_cycle_len(int n) {
    int cycle_len = 1;

    while (n > 1) {
        if (n % 2 == 1) {
            n = (3 * n + 1) / 2;
            cycle_len += 2;
        }
        while (n % 2 == 0) {
            n /= 2;
            cycle_len++;
        }
    }
    return cycle_len;
}

int max(int i, int j) {
    if (i > j)  return i;
    else        return j;
}

int min(int i, int j) {
    if (i < j)  return i;
    else        return j;
}

