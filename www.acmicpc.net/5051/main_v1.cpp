// Time Out
// Test 용 
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int	n, a, b, c, cnt;

	while (cin >> n) {
		cnt = 0;
		for (a = 1; a < n; a++)
			for (b = a; b < n; b++)
				for (c = 1; c < n; c++)
					if ((a*a + b*b) % n == (c*c) % n)
						cnt++;
		cout << cnt << endl;
	}
	return 0;
}

