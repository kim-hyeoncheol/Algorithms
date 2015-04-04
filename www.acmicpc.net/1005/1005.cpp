#include <iostream>

using namespace std;

int graph[1001][1001];
int D[1001];

int main(int argc, char *argv[]) {
    int T, N, K;
    int i, j;

    for (cin >> T; T > 0; T--) {
        cin >> N >> K;
        for (i = 0; i < N; i++)
            cin >> D[i];
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                graph[i][j] = 0;



        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> cx >> cy >> r;
            if (isInside(x1, y1, cx, cy, r) != isInside(x2, y2, cx, cy, r))    cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}

