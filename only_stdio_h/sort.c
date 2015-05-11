#include <stdio.h>
/** 작업 순서
 * 1. pseudo code 보면서 직접 구현 (최대한 단순하게)
 * 2. compare() 구현 (정수 버전, 문자열 버전)
 * 3. 속도 비교
 */

/**
 * map page 

SYNOPSIS
     #include <stdlib.h>

     int
     heapsort(void *base, size_t nel, size_t width,
         int (*compar)(const void *, const void *));

     int
     mergesort(void *base, size_t nel, size_t width,
         int (*compar)(const void *, const void *));

     void
     qsort(void *base, size_t nel, size_t width,
         int (*compar)(const void *, const void *));

 */

/**
 * STL compare 흉내내기
 * 1. 내림차순, 오름차순
 * 2. 정수, 문자열, 실수
template <class T> struct greater {
  bool operator() (const T& x, const T& y) const {return x>y;}
  typedef T first_argument_type;
  typedef T second_argument_type;
  typedef bool result_type;
};

template <class T> struct less {
  bool operator() (const T& x, const T& y) const {return x<y;}
  typedef T first_argument_type;
  typedef T second_argument_type;
  typedef bool result_type;
};

std::sort (numbers, numbers+5, std::greater<int>());    // 내림차순
std::sort (numbers, numbers+5, std::less<int>());       // 오름차순
 */

int heapsort(void *base, size_t nel, size_t width, int (*compar)(const void *, const void *))
{
    return 0;
}
         
int main(int argc, char *argv[])
{
    return 0;
}
