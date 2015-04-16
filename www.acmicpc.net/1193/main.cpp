/*
 * 1193 - 분수찾기
 * https://www.acmicpc.net/problem/1193
 * Run Time : 
 * 수열 문제 : 지그재그로 반복됨. (문제 꼼꼼히 읽자.)
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
	int	X, i;
	while (cin >> X) {
		for (i = 1; i < X; i++)	X -= i;
		if (i % 2) 	cout << i + 1 - X << "/" << X << endl;
		else 		cout << X << "/" << i + 1 - X << endl;
	}
    return 0;
}


