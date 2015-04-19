/*
 * http://183.106.113.109/30stair/rpoly/rpoly.php?pname=rpoly
 * Run Time : 0.07
 * 넓이 S = 1/2 * a * b * sin(theta)
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
	double r, n;
	while (cin >> r >> n) {
		printf("%.3f\n", n * r * r / 2.0 * sin(2.0 * M_PI / n));
	}
    return 0;
}


