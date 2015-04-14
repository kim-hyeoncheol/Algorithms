/*
 * 1672 - DNA 해독
 * https://www.acmicpc.net/problem/1672
 * Run Time : 
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, i;
    char    A[1000000], cur;
    cin >> N;
    for (i = 0; i < N; i++) cin >> A[i];
    cur = A[N - 1];
    for (i = N - 2; i >= 0; i--) {
        switch (A[i]) {
            case 'A':
                switch (cur) {
                    case 'A':
                        cur = 'A';
                        break;
                    case 'G':
                        cur = 'C';
                        break;
                    case 'C':
                        cur = 'A';
                        break;
                    case 'T':
                        cur = 'G';
                        break;
                }
                break;
            case 'G':
                switch (cur) {
                    case 'A':
                        cur = 'C';
                        break;
                    case 'G':
                        cur = 'G';
                        break;
                    case 'C':
                        cur = 'T';
                        break;
                    case 'T':
                        cur = 'A';
                        break;
                }
                break;
            case 'C':
                switch (cur) {
                    case 'A':
                        cur = 'A';
                        break;
                    case 'G':
                        cur = 'T';
                        break;
                    case 'C':
                        cur = 'C';
                        break;
                    case 'T':
                        cur = 'G';
                        break;
                }
                break;
            case 'T':
                switch (cur) {
                    case 'A':
                        cur = 'G';
                        break;
                    case 'G':
                        cur = 'A';
                        break;
                    case 'C':
                        cur = 'G';
                        break;
                    case 'T':
                        cur = 'T';
                        break;
                }
                break;
        }
    }
    cout << cur << endl;
    return 0;
}


