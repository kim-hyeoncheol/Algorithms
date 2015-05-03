/*
 * 2750 - 
 * https://www.acmicpc.net/problem/2750
 * Run Time : 0 MS
 */
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
    int i, j;
    string  str;
    string frame[5] = {
        "..#...#...*...#...#...*...#...#...*...#...#...*...#...#...*..", 
        ".#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.", 
        "#.D.#.O.*.G.*.D.#.O.*.G.*.D.#.O.*.G.*.D.#.O.*.G.*.D.#.O.*.G.*", 
        ".#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.#.#.#.#.*.*.", 
        "..#...#...*...#...#...*...#...#...*...#...#...*...#...#...*.."
    }; 
    cin >> str;
    for (i = 0; i < str.size(); i++)
        frame[2][2 + i * 4] = str[i];
    if (str.size() % 3)
        frame[2][str.size() * 4] = '#';
    for (i = 0; i < 5; i++) {
        for (j = 0; j <= 4 * str.size(); j++)
            cout << frame[i][j];
        cout << endl;
    }
    return 0;
}


