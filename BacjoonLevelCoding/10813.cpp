#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

void main10813()
{
	int n, m;
	cin >> n >> m;

	vector<int> v(n, 0);

	iota(v.begin(), v.end(), 1);

	for (int i = 0; i < m; ++i) {
		int a, b;
		cin >> a >> b;
		int temp = v[a-1];
		v[a - 1] = v[b-1];
		v[b-1] = temp;
	}

	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << ' ';
	}
}