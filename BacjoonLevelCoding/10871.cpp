#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void main10871()
{
	int n, x;
	cin >> n >> x;

	vector<int> v;
	v.reserve(10000);

	int num;
	for (int i = 0; i < n; ++i) {
		cin >> num;
		v.push_back(num);
	}

	auto a = v.begin();
	while (true) {
		a = find_if(a, v.end(), [&](int n) {
			return n < x;
			});
		
		if (a == v.end()) break;
		cout << *a << ' ';
		++a;
		
	}	
}