/*
 * 2896 - 무알콜 칵테일
 * https://www.acmicpc.net/problem/2896
 * Run Time : 0 MS
 * 정밀도 범위
 */
#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char* argv[]) {
	double	A, B, C, I, J, K, min;
	cin >> A >> B >> C >> I >> J >> K;
	min = A / I;
	if (min > B / J)	min = B / J;
	if (min > C / K)	min = C / K;
	cout << setprecision(8);
	cout << A - min * I << " " << B - min * J << " " << C - min * K << endl;

    return 0;
}


