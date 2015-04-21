/*
 * http://183.106.113.109/30stair/koi_watch/koi_watch.php?pname=koi_watch
 * Run Time : 0.15
 * 시각 구하기.
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	H, M, S, D, total, day = 24 * 60 * 60;
	while (cin >> H >> M >> S >> D) {
		total = (60 * 60 * H + 60 * M + S + D) % day;
		H = total / 60 / 60;
		total %= 60 * 60;
		M = total / 60;
		S = total % 60;
		cout << H << " " << M << " " << S << endl;
	}
    return 0;
}


