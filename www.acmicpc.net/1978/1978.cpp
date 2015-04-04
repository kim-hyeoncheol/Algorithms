#include <iostream>

using namespace std;

bool isPrime(int n) {
    if (n < 2)  return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main(int argc, char * carv[]) {
    int N, num, count = 0;

    for (cin >> N; N > 0; N--) {
        cin >> num;
        if (isPrime(num)) {
            //cout << num << " is prime." << endl;
            count++;
        } else {
            //cout << num << " is not prime." << endl;
        }
    }
    cout << count << endl;
}

