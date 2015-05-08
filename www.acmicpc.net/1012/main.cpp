/*
 * 1012 - 유기농 배추
 * https://www.acmicpc.net/problem/1012
 * Run Time : 4 MS
 *
 * 이런 문제는 원래 DFS + Union-Find 로 풀어야 함.
 * 하지만, 여기에서는 문제가 워낙 쉬워서 대출 DFS 만.
 */
#include <iostream>

using namespace std;

class Farm
{
	private:
		int cabbage[50][50];

	public:
	    void init(int M, int N)
        {
            for (int X = 0; X < M; X++)
                for (int Y = 0; Y < N; Y++)
                    cabbage[X][Y] = 0;
        }

		void insert(int X, int Y)
		{
		    cabbage[X][Y] = 1;
		}

        void connected(int X, int Y, int M, int N)
        {
            if (X < 0 || X >= M || Y < 0 || Y >= N)   return;
            if (cabbage[X][Y] == 1)
            {
                cabbage[X][Y] = 0;
                connected(X-1, Y, M, N);
                connected(X+1, Y, M, N);
                connected(X, Y-1, M, N);
                connected(X, Y+1, M, N);
            }
        }

		int count_worms(int M, int N)
		{
		    int worms = 0, X, Y;
		    for (X = 0; X < M; X++)
		        for (Y = 0; Y < N; Y++)
                    if (cabbage[X][Y] == 1)
                    {
                        worms++;
                        connected(X, Y, M, N);
                }
		    return worms;
		}
};

int main(int argc, char* argv[]) {
    int T, M, N, K, X, Y;
    Farm    farm;
    for (cin >> T; T; T--) {
        cin >> M >> N >> K;
        farm.init(M, N);
        while (K--) {
            cin >> X >> Y;
            farm.insert(X, Y);
        }
        cout << farm.count_worms(M, N) << endl;
    }
    return 0;
}
