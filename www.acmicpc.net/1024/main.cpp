/*
 * 1024 - 수열의 합
 * https://www.acmicpc.net/problem/1024
 * Run Time : 0 MS
 *
 * 길이가 L 이상인 음이 아닌 정수 리스트. (문제를 꼼꼼하게 읽자.)
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	long long N, L, i, a;
	while (cin >> N >> L) {
		for (i = L; i <= 100; i++) {
			a = 2 * N + i * (1 - i);
			if (a % 2)	continue;
			a /= 2;
			if (a % i)	continue;
			a /= i;
			if (a >= 0)	break;
		}
		if (i > 100)	cout << -1;
		else {
			cout << a;
			for (N -= a; N; N -= a) {
				cout << " " << ++a;
			}
		}
		cout << endl;
	}
    return 0;
}


