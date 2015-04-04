#include <iostream>

using namespace std;

int isInside(int p1, int p2, int c1, int c2, int r) {
    if ((p1 - c1) * (p1 - c1) + (p2 - c2) * (p2 - c2) < r * r)
        return 1;
    else
        return 0;
}

int main(int argc, char *argv[]) {
    int T, n;
    int x1, y1, x2, y2;
    int cx, cy, r;
    int i;
    int cnt;

    for (cin >> T; T > 0; T--) {
        cnt = 0;
        cin >> x1 >> y1 >> x2 >> y2;
        cin >> n;
        for (i = 0; i < n; i++) {
            cin >> cx >> cy >> r;
            if (isInside(x1, y1, cx, cy, r) != isInside(x2, y2, cx, cy, r))    cnt++;
        }
        cout << cnt << endl;
    }
    return 0;
}

