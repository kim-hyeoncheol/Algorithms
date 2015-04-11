/*
 * http://183.106.113.109/30stair/dfreq/dfreq.php?pname=dfreq
 * Run Time : 
 */
#include <iostream>

using namespace std;

string  N;
char    target;

int get_count_right(int left_count, int right_position) {
    if (right_position >= num_str.size())   return 0;
    if (num_str[right_position] == target)  left_count++;
    return get_count_right(left_count, right_position + 1);
}

int get_count(string n, int target) {
    int result = 0, cur, i, j;

    for (i = n.size() - 1; i > 
    cout << n << " : " << target << endl;
    return 0;
}

int main(int argc, char* argv[]) {
    cin >> N >> target;
    cout << get_count(to_string(N), target) << endl;
    return 0;
}


