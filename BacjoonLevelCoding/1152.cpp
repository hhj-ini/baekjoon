#include <iostream>
#include <string>
#include <vector>

using namespace std;

void main1152()
{
	vector<string> v;
	v.reserve(10000);

	string str;
	while (cin >> str) {
		v.emplace_back(str);
	}

	cout << v.size();
}