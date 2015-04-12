/*
 * 4999 - 아!
 * https://www.acmicpc.net/problem/4999
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    string  my, doctor;
    while (cin >> my >> doctor) {
        if (my.size() >= doctor.size()) cout << "go" << endl;
        else    cout << "no" << endl;
    }
    return 0;
}


