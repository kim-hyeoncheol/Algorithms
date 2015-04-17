/*
 * http://183.106.113.109/30stair/angle/angle.php?pname=angle
 * Run Time : 0.05
 * 내각의 합, 외각의 합
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	n;
	cin >> n;
	cout << 180 * (n - 2) << " " << 360 << endl;
    return 0;
}


