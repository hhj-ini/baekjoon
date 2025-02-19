#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main2562()
{
	vector<int> v;
	int num;
	while (cin >> num)
		v.push_back(num);


	auto a = max_element(v.begin(), v.end());
	cout << *a << '\n' << a - v.begin() + 1;
}