/*
 * 5378 - Hex
 * Breadth First Search
 * Accept
 */
#include <iostream>
#include <queue>

using namespace std;

int     N;
char    board[100][100];
bool    step[100][100];
queue< pair<int, int> >  cells;

void initStep()
{
    int i, j;
    for (i = 0; i < N; i++)
        for (j = 0; j < N; j++)
            step[i][j] = false;
    while (!cells.empty())   cells.pop();
}

void checkCells(int i, int j, char color)
{
    if (i < 0 || i >= N || j < 0 || j >= N) return;
    if (board[i][j] == color && !step[i][j]) {
        step[i][j] = true;
        cells.push(pair<int, int>(i, j));
    }
}

void checkAroundCells(int i, int j, char color)
{
    checkCells(i, j + 1, color);
    checkCells(i, j- 1, color);
    checkCells(i - 1, j, color);
    checkCells(i + 1, j, color);
    checkCells(i - 1, j + 1, color);
    checkCells(i + 1, j - 1, color);
}

bool    isBlackWon()
{
    initStep();
    for (int j = 0; j < N; j++)
        checkCells(0, j, 'B');

    pair<int, int>  a_cell;
    while (!cells.empty()) {
        a_cell = cells.front();
        cells.pop();
        if (a_cell.first == N-1)    return true;
        checkAroundCells(a_cell.first, a_cell.second, 'B');
    }
    return false;
}

bool    isWhiteWon()
{
    initStep();
    for (int i = 0; i < N; i++)
        checkCells(i, N-1, 'W');

    pair<int, int>  a_cell;
    while (!cells.empty()) {
        a_cell = cells.front();
        cells.pop();
        if (a_cell.second == 0) return true;
        checkAroundCells(a_cell.first, a_cell.second, 'W');
    }
    return false;
}

int main(int argc, char *argv[])
{
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
