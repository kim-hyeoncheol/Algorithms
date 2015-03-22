/*
 * 100 - The 3n + 1 problem
 * http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=3&page=show_problem&problem=36
 * Run Time : 0.042
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void init_cycle_length();
void final_cycle_length();
void get_3n_plus_1(int n);
int get_cycle_length(int n);
int get_maximum_cycle_length(int i, int j);
int max(int i, int j);
int min(int i, int j);

int     cycle_length_SIZE = 10000;
int*    cycle_length;

int main(int argc, char** argv) {

    init_cycle_length();

    char    input[1024];
    int     i, j;

    /*
     * get_3n_plus_1(22);
     */

    while ( fgets(input, 1024, stdin) ) {
        sscanf(input, "%d %d", &i, &j);
        printf("%d %d %d\n", i, j, get_maximum_cycle_length(min(i, j), max(i, j)));
    }
    final_cycle_length();
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
    if (n >= cycle_length_SIZE) {
        return ((n & 1) ? (get_cycle_length((3 * n + 1) / 2) + 2) : (get_cycle_length(n / 2) + 1));
    }
    if (cycle_length[n] == 0) {
        cycle_length[n] = (n & 1) ? (get_cycle_length((3 * n + 1) / 2) + 2) : (get_cycle_length(n / 2) + 1);
    }
    return cycle_length[n];
}

void get_3n_plus_1(int n) {
    while (n != 1) {
       printf("%d ", n);
       if (n % 2 == 1) {
           n = 3 * n + 1;
       } else {
           n = n / 2;
       }
    }
    printf("%d\n", n);
}

void init_cycle_length() {
    int i;
    cycle_length = (int *)malloc(sizeof(int) * cycle_length_SIZE);
    memset(cycle_length, 0, cycle_length_SIZE);
    for (i = 1; i < cycle_length_SIZE; i *= 2) {
        cycle_length[i] = cycle_length[i/2] + 1;
    }
}

void final_cycle_length() {
    if (cycle_length != NULL)
        free(cycle_length);
}

int max(int i, int j) {
    if (i > j)  return i;
    else        return j;
}

int min(int i, int j) {
    if (i < j)  return i;
    else        return j;
}

