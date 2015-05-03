#include <stdio.h>
//#include <string.h>

#ifndef NULL
#define NULL 0
#endif

#ifndef _STRING_H_

typedef unsigned long       size_t;
typedef unsigned char       u_char;
typedef unsigned short      u_short;
typedef unsigned int        u_int;
typedef unsigned long       u_long;

size_t strlen(str)
    const char *str;
{
    register const char *s;

    for (s = str; *s; ++s);
    return(s - str);
}

char * strcpy(dst, src)
    char        *dst;
    const char  *src;
{
    char *s = dst;
    while ((*s++ = *src++) != 0) ;
    return (dst);
}

char * strncpy(dst, src, n)
    char        *dst;
    const char  *src;
    size_t      n;
{
    char *s = dst;
    while (n > 0 && *src != '\0') {
        *s++ = *src++;
        --n;
    }
    while (n > 0) {
        *s++ = '\0';
        --n;
    }
    return dst;
}

char * strcat(dst, src)
    char        *dst;
    const char  *src;
{
    strcpy(&dst[strlen(dst)], src);
    return dst;
}

char * strncat(dst, src, n)
    char        *dst;
    const char  *src;
    size_t      n;
{
    unsigned len1 = strlen(dst);
    unsigned len2 = strlen(src);

    if (len2 < n) {
        strcpy(&dst[len1], src);
    } else {
        strncpy(&dst[len1], src, n);
        dst[len1 + n] = '\0';
    }
    return dst;
}

int strcmp(s1, s2)
    const char  *s1;
    const char  *s2;
{
    while (*s1 == *s2++)
        if (*s1++ == 0) return (0);
    return (*(const unsigned char *)s1 - *(const unsigned char *)(s2 - 1));
}

int strncmp(s1, s2, n)
    const char  *s1;
    const char  *s2;
    size_t      n;
{
    for ( ; n > 0; s1++, s2++, --n)
        if (*s1 != *s2)
            return ((*(unsigned char *)s1 < *(unsigned char *)s2) ? -1 : +1);
        else if (*s1 == '\0')
            return 0;
    return 0;
}

char *strchr(s, c)
    const char  *s;
    int         c;
{
    const char ch = c;

    for ( ; *s != ch; s++)
        if (*s == '\0')
            return 0;
    return (char *)s;
}

char * strstr(s, find)
    register const char *s, *find;
{
    register char c, sc;
    register size_t len;

    if ((c = *find++) != 0) {
        len = strlen(find);
        do {
            do {
                if ((sc = *s++) == 0)
                    return (NULL);
            } while (sc != c);
        } while (strncmp(s, find, len) != 0);
        s--;
    }
    return ((char *)s);
}

char * strtok(s, delim)
    register char *s;
    register const char *delim;
{
    register char *spanp;
    register int c, sc;
    char *tok;
    static char *last;


    if (s == NULL && (s = last) == NULL)
        return (NULL);

    /*
     * Skip (span) leading delimiters (s += strspn(s, delim), sort of).
     */
cont:
    c = *s++;
    for (spanp = (char *)delim; (sc = *spanp++) != 0;) {
        if (c == sc)
            goto cont;
    }

    if (c == 0) {       /* no non-delimiter characters */
        last = NULL;
        return (NULL);
    }
    tok = s - 1;

    /*
     * Scan token (scan for delimiters: s += strcspn(s, delim), sort of).
     * Note that delim must have one NUL; we stop if we see that, too.
     */
    for (;;) {
        c = *s++;
        spanp = (char *)delim;
        do {
            if ((sc = *spanp++) == c) {
                if (c == 0)
                    s = NULL;
                else
                    s[-1] = 0;
                last = s;
                return (tok);
            }
        } while (sc != 0);
    }
    /* NOTREACHED */
}

#define wsize   sizeof(u_int)
#define wmask   (wsize - 1)

#ifdef BZERO
#define RETURN  return
#define VAL 0
#define WIDEVAL 0

void bzero(dst0, length)
    void            *dst0;
    register size_t length;
#else
#define RETURN  return (dst0)
#define VAL c0
#define WIDEVAL c

void * memset(dst0, c0, length)
    void            *dst0;
    register int    c0;
    register size_t length;
#endif
{
    register size_t t;
    register u_int  c;
    register u_char *dst;

    dst = dst0;
    /*
     * If not enough words, just fill bytes.  A length >= 2 words
     * guarantees that at least one of them is `complete' after
     * any necessary alignment.  For instance:
     *
     *  |-----------|-----------|-----------|
     *  |00|01|02|03|04|05|06|07|08|09|0A|00|
     *            ^---------------------^
     *       dst         dst+length-1
     *
     * but we use a minimum of 3 here since the overhead of the code
     * to do word writes is substantial.
     */ 
    if (length < 3 * wsize) {
        while (length != 0) {
            *dst++ = VAL;
            --length;
        }
        RETURN;
    }

#ifndef BZERO
    if ((c = (u_char)c0) != 0) {    /* Fill the word. */
        c = (c << 8) | c;   /* u_int is 16 bits. */
#if UINT_MAX > 0xffff
        c = (c << 16) | c;  /* u_int is 32 bits. */
#endif
#if UINT_MAX > 0xffffffff
        c = (c << 32) | c;  /* u_int is 64 bits. */
#endif
    }
#endif
    /* Align destination by filling in bytes. */
    if ((t = (int)dst & wmask) != 0) {
        t = wsize - t;
        length -= t;
        do {
            *dst++ = VAL;
        } while (--t != 0);
    }

    /* Fill words.  Length was >= 2*words so we know t >= 1 here. */
    t = length / wsize;
    do {
        *(u_int *)dst = WIDEVAL;
        dst += wsize;
    } while (--t != 0);

    /* Mop up trailing bytes, if any. */
    t = length & wmask;
    if (t != 0)
        do {
            *dst++ = VAL;
        } while (--t != 0);
    RETURN;
}


#endif


/**
 * test code
 */
int main(int argc, char *argv[])
{
#ifdef _STRING_H_
    printf("#include <string.h>\n");
#else
    printf("// #include <string.h>\n");
#endif

    char a[32] = "Hello, ";
    char b[32] = "World!";
    char c[32];

    // base
    printf("base : %s%s\n", a, b);
    // strlen
    printf("strlen : %lu\n", strlen(a));
    // strcpy
    strcpy(c, a);
    printf("strcpy : %s\n", c);
    // strncpy
    strcpy(c, "hello!");        // hello!
    strncpy(c + 1, "ELL", 3);   // hELLo!
    printf("strncpy : %s\n", c);
    // strcat
    strcpy(c, a);               // Hello, 
    strcat(c, b);               // Hello, World!
    printf("strcat : %s\n", c);
    // strncat
    strcpy(c, a);               // Hello,
    strncat(c, b, 3);           // Hello, Wor
    printf("strncat : %s\n", c);

    return 0;
}

