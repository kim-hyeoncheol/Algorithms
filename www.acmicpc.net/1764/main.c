/*
 * 1764 - 듣보잡
 * https://www.acmicpc.net/problem/1764
 * Run Time : 56 MS
 * only <stdio.h>
 */
#include <stdio.h>
//#include <stdlib.h>
//#include <string.h>

char    A[500000][20];
char    B[500000][20];
int     intersection[500000], count = 0;

#ifndef _STRING_H_
int strcmp(const char *s1, const char *s2)
{
    while (*s1 == *s2++)
        if (*s1++ == 0) return (0);
    return (*(const unsigned char *)s1 - *(const unsigned char *)(s2 - 1));
}
#endif

#ifndef _STDLIB_H_
void qsort (void *base, size_t nmemb, size_t size, int (*compar)(const void *, const void *))
{
    char *base2 = (char *)base;
    size_t i, a, b, c;
    while (nmemb > 1)
    {
        a = 0;
        b = nmemb - 1;
        c = (a + b) / 2; /* Middle element */
        for(;;)
        {
            while((*compar)(&base2[size * c], &base2[size * a]) > 0) 
            a++; /* Look for one >= middle */
            while((*compar)(&base2[size * c], &base2[size * b]) < 0) 
                b--; /* Look for one <= middle */
            if(a >= b)
                break; /* We found no pair */
            for(i = 0; i < size; i++) /* swap them */
            {
                char tmp = base2[size * a + i];
                base2[size * a + i] = base2[size * b + i];
                base2[size * b + i] = tmp;
            }
                if(c == a) /* Keep track of middle element */
                    c = b;
                else if(c == b)
                    c = a;
                a++; /* These two are already sorted */
                b--;
        } /* a points to first element of right intervall now (b to last of left) */
        b++;
        if(b < nmemb - b) /* do recursion on smaller intervall and iteration on larger one */
        {
            qsort(base2, b, size, compar);
            base2 = &base2[size * b];
            nmemb = nmemb - b;
        }
        else
        {
            qsort(&base2[size * b], nmemb - b, size, compar);
            nmemb = b;
        }
    }
}
#endif

int main(int argc, char* argv[])
{
    int N, M, i, j, cmp;

    scanf("%d %d\n", &N, &M);
    for (i = 0; i < N; i++) scanf("%s\n", A[i]);
    for (i = 0; i < M; i++) scanf("%s\n", B[i]);

    qsort(A, N, 20, (int (*)(const void *, const void *))strcmp);
    qsort(B, M, 20, (int (*)(const void *, const void *))strcmp);

    i = j = 0;
    while (i < N && j < M)
    {
        cmp = strcmp(A[i], B[j]);
        if (cmp > 0) j++;
        else if (cmp < 0) i++;
        else
        {
            intersection[count] = i;
            i++, j++, count++;
        }
    }
    printf("%d\n", count);
    for (i = 0; i < count; i++)
        printf("%s\n", A[intersection[i]]);
    return 0;
}


