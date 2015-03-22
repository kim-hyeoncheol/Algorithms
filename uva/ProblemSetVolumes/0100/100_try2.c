/*
 *  Run Time    : 0.532
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_cycle_length(int n);
int get_maximum_cycle_length(int i, int j);
int max(int i, int j);
int min(int i, int j);

int main(int argc, char** argv) {

    char    input[1024];
    int     i, j;

    while ( fgets(input, 1024, stdin) ) {
        sscanf(input, "%d %d", &i, &j);
        printf("%d %d %d\n", i, j, get_maximum_cycle_length(min(i, j), max(i, j)));
    }
    return 0;
}

int get_maximum_cycle_length(int i, int j) {
    int maximun_cycle_length = 0;

    for (; i <= j; i++) {
        maximun_cycle_length = max(maximun_cycle_length, get_cycle_length(i));
    }
    return maximun_cycle_length;
}

int get_cycle_length(int n) {
    if (n == 1) return 1;
    
    return ((n & 1) ? (get_cycle_length((3 * n + 1) / 2) + 2) : (get_cycle_length(n / 2) + 1));
}

int max(int i, int j) {
    if (i > j)  return i;
    else        return j;
}

int min(int i, int j) {
    if (i < j)  return i;
    else        return j;
}

