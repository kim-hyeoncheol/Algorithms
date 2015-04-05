/*
 * 101 - The Blocks Problem
 * http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=37
 * Run Time : 0.029
 */
#include <iostream>
#include <algorithm>
#include <list>
#include <string>

using namespace std;

int position[25];
list<int>  block[25];

void restore(int a) {
    int position_a = position[a];
    int cur;
    while (!block[position_a].empty()) {
        cur = block[position_a].back();
        if (cur == a)   break;
        block[position_a].pop_back();
        block[cur].push_back(cur);
        position[cur] = cur;
    }
}

void move(int a, int b) {
    restore(a);
    if (block[position[a]].empty()) return;
    block[position[b]].push_back(block[position[a]].back());
    block[position[a]].pop_back();
    position[a] = position[b];
}

void pile(int a, int b) {
    list <int>::iterator it;
    int position_a = position[a];
    int cur;

    for (it = block[position_a].begin(); it != block[position_a].end(); it++) {
        if (*it == a)   break;
    }
    for (; it != block[position_a].end(); it++) {
        block[position[b]].push_back(*it);
        position[*it] = position[b];
    }
    while (!block[position_a].empty()) {
        cur = block[position_a].back();
        block[position_a].pop_back();
        if (cur == a)  break;
    }
}
    
int main(int argc, char* argv[]) {
    string  cmd1, cmd2;
    int     n, a, b, i;
    list <int>::iterator it;

    while (cin >> n) {
        if (n >= 25)    break;
        /* init */
        for (i = 0; i < n; i++) { 
            if (!block[i].empty())   block[i].clear();
            block[i].push_back(i);
            position[i] = i;
        }

        while (cin >> cmd1) {
            if (cmd1.find("quit") != string::npos)  break;

            cin >> a >> cmd2 >> b;
            if (a == b || position[a] == position[b])   continue;
            if (a < 0 || b < 0 || a >= n || b >= n)     continue;

            if (cmd2.find("onto") != string::npos)  restore(b);
            if (cmd1.find("move") != string::npos)  move(a, b);
            else pile(a, b);
        }

        /* print */
        for(i = 0; i < n; i++)
        {
            cout << i << ":";
            for (it = block[i].begin(); it != block[i].end(); it++)
                cout << " " << *it;
            cout << endl;
        }
        for(i = 0; i < n; i++) {
            if (!block[i].empty()) {
                block[i].clear();
            }
        }
        if (cmd1.find("quit") != string::npos)  break;
    }

    return 0;
}


