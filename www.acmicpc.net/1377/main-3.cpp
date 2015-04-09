/*
 * 1377 - 버블 소트
 * https://www.acmicpc.net/problem/1377
 * Run Time : Time Out
 */
#include <iostream>
#include <list>

using namespace std;

list <int>  bubble;

int insert(int item) {
    int i = 0;
    list<int>::iterator it;
    for (it = bubble.begin(); it != bubble.end(); it++) {
        if (*it <= item) break;
        i++;
    }
    bubble.insert(it, item);
    return i;
}

void print() {
    for (list<int>::iterator it = bubble.begin(); it != bubble.end(); it++)
        cout << *it << " ";
    cout << endl;
}

int main(int argc, char* argv[]) {
    int N, max, i, count, cur;

    while (cin >> N) {
        for (max = i = 0; i < N; i++) {
            cin >> cur;
            count = insert(cur);
            if (max < count)    max = count;
            //print();
        }
        cout << max + 1 << endl;
        bubble.clear();
    }
    return 0;
}


