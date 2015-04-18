/*
 * http://183.106.113.109/30stair/flr/flr.php?pname=flr
 * Run Time : 0.25	( n /= 2; )
 * Run Time : 0.16	( n >>= 1; )
 * Run Time : 0.18	( log2() : 이게 오히려 느리군. )
 */
#include <iostream>
#include <cmath>

using namespace std;

int get_floor(int n)
{
	int	i = 0;
	while (n)
	{
		//n /= 2;
		n >>= 1;
		i++;
	}
	return i;
}

int main(int argc, char* argv[])
{
	int	n;
	while ( cin >> n )
	{
		cout << get_floor(n) << endl;
		//cout << ((int)log2(double(n)) + 1) << endl;
	}
    return 0;
}


