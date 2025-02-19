#include <iostream>
#include <string>
#include <vector>

using namespace std;

void main2675()
{
	int t;
	cin >> t;
	
	vector<pair<int, string>> v;
	v.reserve(1000);

	for (int i = 0; i < t; ++i) {
		int r;
		cin >> r;
		
		string str;
		cin >> str;
		
		v.emplace_back(make_pair(r, str));
	}

	for (pair<int, string> p : v) {
		for (int i = 0; i < p.second.length(); ++i) {
			for (int j = 0; j < p.first; ++j) {
				cout << p.second[i];
			}
		}
		cout << endl;
	}
}

/*
5
2 *+\
3 ER
4 /%-
2 :\
4 AB
**++\\
EEERRR
////%%%%----
*/