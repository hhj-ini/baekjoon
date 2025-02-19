#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

void main10811()
{
	int n, m;
	cin >> n >> m;

	vector<int> v(n);
	iota(v.begin(), v.end(), 1);
	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;	// a 부터 b 까지 바구니를 역순으로
		/*int size = b - a;
		if (size == 0) break;*/
		vector<int> temp;
		//copy(v.begin() + a - 1, v.begin() + b, temp.begin());
		copy(v.begin() + a - 1, v.begin() + b, std::back_inserter(temp));

		for (auto j = temp.rbegin(); j != temp.rend(); ++j) {
			v[a - 1] = *j;
			++a;
		}
	}

	for (int a : v) {
		std::cout << a << ' ';
	}
}