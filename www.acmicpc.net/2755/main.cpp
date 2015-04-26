/*
 * 2755 - 이번학기 평점은 몇점?
 * https://www.acmicpc.net/problem/2755
 * Run Time : 0 MS
 */
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
	int	N, a, count = 0;
	double	total = 0.0;
	string	subject, grade;

	for (cin >> N; N; N--) {
		cin >> subject >> a >> grade;
		count += a;
		switch (grade[0]) {
			case 'A':
				switch (grade[1]) {
					case '+':
						total += 4.3 * a;
						break;
					case '0':
						total += 4.0 * a;
						break;
					case '-':
						total += 3.7 * a;
						break;
				}
				break;
			case 'B':
				switch (grade[1]) {
					case '+':
						total += 3.3 * a;
						break;
					case '0':
						total += 3.0 * a;
						break;
					case '-':
						total += 2.7 * a;
						break;
				}
				break;
			case 'C':
				switch (grade[1]) {
					case '+':
						total += 2.3 * a;
						break;
					case '0':
						total += 2.0 * a;
						break;
					case '-':
						total += 1.7 * a;
						break;
				}
				break;
			case 'D':
				switch (grade[1]) {
					case '+':
						total += 1.3 * a;
						break;
					case '0':
						total += 1.0 * a;
						break;
					case '-':
						total += 0.7 * a;
						break;
				}
				break;
			case 'F':
				break;
		}
	}
	printf("%0.2f\n", floor(total / count * 100.0 + 0.5) / 100.0);
    return 0;
}


