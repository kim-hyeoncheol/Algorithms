/*
 * 2750 - 
 * https://www.acmicpc.net/problem/2750
 * Run Time : 0 MS
 */
#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char* argv[]) {
	int	num[3], i;
	string	in;
	cin >> num[0] >> num[1] >> num[2];
	sort(num, num + 3);
	cin >> in;
	for (i = 0; i < in.size(); i++) {
		switch (in[i]) {
			case 'A':
				cout << num[0] << " ";
				break;
			case 'B':
				cout << num[1] << " ";
				break;
			case 'C':
				cout << num[2] << " ";
				break;
		}
	}
	cout << endl;
    return 0;
}


