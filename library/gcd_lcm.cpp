/**
 * GCD : Greatest Common Divisor (최대공약수)
 * 
 * @see http://ko.wikipedia.org/wiki/%EC%B5%9C%EB%8C%80%EA%B3%B5%EC%95%BD%EC%88%98
 *
 * a, b 의 대소에 상관없음.
 * get_gcd(a, b) == get_gcd(b, a);
 */
int get_gcd(int a, int b) {
    if (a % b == 0) return b;
    return get_gcd(b, a % b); 
}

/**
 * LCM : Least Common Multiple
 *
 * @see http://ko.wikipedia.org/wiki/%EC%B5%9C%EC%86%8C%EA%B3%B5%EB%B0%B0%EC%88%98
 * a * b = gcd * lcm
 */
int get_lcm(int a, int b) {
    return (a * b / get_gcd(a, b));
}

/**
 *  generic programming in c++
 *                                     
 *  위의 재귀적 방식보다 약간 더 빠름
 */
#include <utility>
#include <iostream>

template <class _Ty>
_Ty gcd(_Ty a, _Ty b) {
    if ( a < b ) std::swap(a,b);
    while ( b > 0 ) {
        _Ty c = b;
        b = a % b;
        a = c;
    }
    return a;
}

int main() {
    std::cout << "gcd(2,4) = " << gcd(2,4) << std::endl;
    return 0;
}

