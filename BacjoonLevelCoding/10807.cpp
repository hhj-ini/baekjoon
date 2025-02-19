#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main10807()
{
	vector<int> v;
	v.reserve(100);
	int n;
	cin >> n;
	for (int i = 0; i < n; ++i) {
		int a;
		cin >> a;
		v.push_back(a);
	}
	int key;
	cin >> key;
	auto a = v.begin();
	int cnt{ 0 };
	while (true) {
		a = find(a, v.end(), key);
		if (a == v.end()) break;
		++cnt; ++a;
	}
	cout << cnt;
}