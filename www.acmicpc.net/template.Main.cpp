/*
 * 2750 - 
 * https://www.acmicpc.net/problem/2750
 * Run Time : 
 */
#include <iostream>
#include <algorithm>
#include <map>
#include <set>
#include <string>

using namespace std;

class Ananagram {
	private:
		map<string, string>	db;

	public:
		void insert(string val) {
			string	key = val;
			transform(key.begin(), key.end(), key.begin(), ::tolower);
			sort(key.begin(), key.end());
			db[key] = (db[key] == "" ? val : "#");
		}

		void print() {
			set<string>	result;
			for (map<string, string>::iterator i = db.begin(); i != db.end(); i++) {
				if (i->second != "#")
					result.insert(i->second);
			}
			for (set<string>::iterator i = result.begin(); i != result.end(); i++)
				cout << *i << endl;
		}
};

int main(int argc, char* argv[]) {
	Ananagram	ana;
    string  str;
    while (cin >> str) {
		if (str == "#")	break;
		ana.insert(str);
	}
	ana.print();
    return 0;
}


