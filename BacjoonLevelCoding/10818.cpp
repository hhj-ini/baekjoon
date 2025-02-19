#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main10818()
{
	int n;
	cin >> n;

	vector<int> v;
	v.reserve(1000000);

	while (cin >> n)
		v.push_back(n);

	auto max_val = max_element(v.begin(), v.end());
	auto min_val = min_element(v.begin(), v.end());

	cout << *min_val << " " << *max_val;
}