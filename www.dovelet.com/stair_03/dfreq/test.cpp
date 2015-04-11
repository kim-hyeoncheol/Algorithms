/*
 * http://183.106.113.109/30stair/dfreq/dfreq.php?pname=dfreq
 * test code
 */
#include <iostream>

using namespace std;

int main(int argc, char* argv[]) {
    int N, target, i, count;
    string  buf;

    while ( cin >> N >> target ) {
        buf = "";
        count = 0;
        for (i = 1; i <= N; i++)
            buf += to_string(i);
        for (i = 0; i < buf.size(); i++)
            if (buf[i] - '0' == target) count++;
        cout << count << " : " << buf << endl;
    }
    return 0;
}


