/*
 * 1747 - 소수&팰린드롬
 * https://www.acmicpc.net/problem/1747
 * Run Time : 
 * to_string() 함수가 c++11 의 string.h 에 들어 있다.
 */
#include <iostream>
#include <string>

using namespace std;

bool is_prime(long long N) {
	if (N <= 1)	return false;
	if (N == 2)	return true;
	if (N % 2 == 0)	return false;
	for (long long i = 3; i * i <= N; i += 2) {
		if (N % i == 0)	return false;
	}
	return true;
}

bool is_palindrome(string N) {
	int	len = N.size(), i;
	for (i = 0; i < len / 2; i++)
		if (N[i] != N[len - i - 1])	return false;
	return true;
}

int main(int argc, char* argv[]) {
	long long N;
	for (cin >> N; true; N++) {
		if (is_palindrome(to_string(N)) && is_prime(N)) {
			cout << N << endl;
			break;
		}
	}
    return 0;
}


