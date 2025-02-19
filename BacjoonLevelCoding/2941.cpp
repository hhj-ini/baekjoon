#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	vector<string> v{ "c=", "c-", "d-", "lj", "nj", "s=", "z="};
	
	string str;
	cin >> str;

	size_t length{ str.length() };
	for (const string& elem : v) {
		auto res = str.find(elem);
		while (string::npos != res) {	
			length -= (elem.length() - 1);
			if (elem == "z=" && str[res - 1] == 'd') {
				--length;
			}
			res = str.find(elem, res + 1);
		}
	}
	cout << length;
}