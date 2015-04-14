/**
 * 소수 구하기
 */

/**
 * is_prime()
 *
 * @version 1
 *
 * @param   n   자연수
 *
 * @return  bool    {@code true}    if n is a prime number.
 *                  {@code false}   if n is NOT a prime number.
 */
bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2)
        if (n % i == 0) return false;
    return true;
}


/**
 * is_prime()
 *
 * i * i : 곱하기 연산 횟수를 줄이기 위함.
 *
 * @version 2
 */
#include <math.h>   // in C
#include <cmath>    // in C++
bool is_prime(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    // (n % 2 == 0) // (n & 1 == 0) // 도찐개찐
    if (n % 2 == 0) return false;
    int sqrt_n = (int)sqrt((double)n);
    for (int i = 3; i <= sqrt_n; i += 2)
        if (n % i == 0) return false;
    return true;
}


/**
 * 에라토스 테네스의 체 (Sieve of Eratosthenes)
 *
 * @see http://en.wikipedia.org/wiki/Sieve_of_Eratosthenes
 *
 * Pseudocode
 */
Input: an integer n > 1 

Let A be an array of Boolean values, indexed by integers 2 to n,
initially all set to true.

for i = 2, 3, 4, ..., not exceeding √n: 
    if A[i] is true:
        for j = i*i, i*(i+1), i*(i+2), i*(i+3), ..., not exceeding n : 
            A[j] := false

Output: all i such that A[i] is true.

