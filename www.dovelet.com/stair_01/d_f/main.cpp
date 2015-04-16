/*
 * http://183.106.113.109/30stair/d_f/d_f.php?pname=d_f
 */
#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char* argv[]) {
	double	n;
	cin >> n;
	printf("%.0f %.2f\n", floor(n), n - floor(n));
	return 0;
}

