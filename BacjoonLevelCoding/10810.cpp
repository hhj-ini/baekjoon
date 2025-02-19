#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void main10810()
{
	int n, m;
	cin >> n >> m;
	vector<int> v(n, 0);

	for (int i = 0; i < m; ++i) {
		int a, b, c;
		cin >> a >> b >> c;
		for (int j = a-1; j < b; ++j) {
			v[j] = c;
		}
	}
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << ' ';
	}
}