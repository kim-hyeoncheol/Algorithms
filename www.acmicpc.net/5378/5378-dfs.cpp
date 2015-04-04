/*
 *  Depth First Search
 *  Time out
 */
#include <iostream>

using namespace std;

int     N;
char    board[100][100];
bool    step[100][100];

void initStep() {
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            step[i][j] = false;
}

bool    existBlackPath(int i, int j) {
    if (i == N - 1) return true;
    step[i][j] = true;
    if (i  > 0) {
        if (!step[i-1][j] && board[i-1][j] == 'B' && existBlackPath(i-1, j))    return true;
        if (j + 1 < N) {
            if (!step[i-1][j+1] && board[i-1][j+1] == 'B' && existBlackPath(i-1, j+1))    return true;
        }
    }
    if (i + 1 < N) {
        if (!step[i+1][j] && board[i+1][j] == 'B' && existBlackPath(i+1, j))    return true;
        if (j > 0) {
            if (!step[i+1][j-1] && board[i+1][j-1] == 'B' && existBlackPath(i+1, j-1))    return true;
        }
    }
    if (j + 1 < N) {
        if (!step[i][j+1] && board[i][j+1] == 'B' && existBlackPath(i, j+1))    return true;
    }
    if (j > 0) {
        if (!step[i][j-1] && board[i][j-1] == 'B' && existBlackPath(i, j-1))    return true;
    }
    step[i][j] = false;
    return false;
}

bool    isBlackWon() {
    initStep();
    for (int j = 0; j < N; j++) {
        if (board[0][j] == 'B' && existBlackPath(0, j))   return true;
    }
    return false;
}

bool    existWhitePath(int i, int j) {
    if (j == 0) return true;
    step[i][j] = true;
    if (i  > 0) {
        if (!step[i-1][j] && board[i-1][j] == 'W' && existWhitePath(i-1, j))    return true;
        if (j + 1 < N) {
            if (!step[i-1][j+1] && board[i-1][j+1] == 'W' && existWhitePath(i-1, j+1))    return true;
        }
    }
    if (i + 1 < N) {
        if (!step[i+1][j] && board[i+1][j] == 'W' && existWhitePath(i+1, j))    return true;
        if (j > 0) {
            if (!step[i+1][j-1] && board[i+1][j-1] == 'W' && existWhitePath(i+1, j-1))    return true;
        }
    }
    if (j + 1 < N) {
        if (!step[i][j+1] && board[i][j+1] == 'W' && existWhitePath(i, j+1))    return true;
    }
    if (j > 0) {
        if (!step[i][j-1] && board[i][j-1] == 'W' && existWhitePath(i, j-1))    return true;
    }
    step[i][j] = false;
    return false;
}

bool    isWhiteWon() {
    initStep();
    for (int i = 0; i < N; i++) {
        if (board[i][N-1] == 'W' && existWhitePath(i, N-1))   return true;
    }
    return false;
}

int main(int argc, char *argv[]) {
    int T, i, j;

    for (cin >> T; T > 0; T--) {
        cin >> N;
        for (i = 0; i < N; i++)
            for (j = 0; j < N; j++)
                cin >> board[i][j];
        if (isBlackWon()) {
            cout << "Black wins" << endl;
        } else if (isWhiteWon()) {
            cout << "White wins" << endl;
        } else {
            cout << "Not finished" << endl;
        }
    }
    return 0;
}
