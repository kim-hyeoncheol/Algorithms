/*
 * 1076 - 저항
 * https://www.acmicpc.net/problem/1076
 * Run Time : 
 */
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <map>

using namespace std;

int main(int argc, char *argv[]) {
    string s1,s2,s3;
    long long result = 0;
    map<string, long long> color;
    
    color["black"] = 0;
    color["brown"] = 1;
    color["red"] = 2;
    color["orange"] = 3;
    color["yellow"] = 4;
    color["green"] = 5;
    color["blue"] = 6;
    color["violet"] = 7;
    color["grey"] = 8;
    color["white"] = 9;

    cout.setf(ios_base::fixed);
    while (cin >> s1 >> s2 >> s3) {
        cout << setprecision(0);
        cout << (color[s1] * 10 + color[s2]) * powl(10, color[s3]) << endl;
    }
    return 0;
}

