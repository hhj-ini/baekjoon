#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main5597()
{
	vector<bool> v(30, false);
	for (int i = 0; i < 30; ++i) {
		int c;
		cin >> c;
		v[c - 1] = true;
	}

	auto a1 = find(v.begin(), v.end(), false);
	auto a2 = find(a1+1, v.end(), false);
	cout << a1 - v.begin() + 1 << endl;
	cout << a2 - v.begin() + 1<< endl;
}