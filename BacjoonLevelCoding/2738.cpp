#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector<vector<int>> v(n, vector<int>(m, 0));	// n*m 행렬 0으로 초기화

	for (int i = 0; i < 2; ++i) {
		for (int r = 0; r < n; ++r) {
			for (int c = 0; c < m; ++c) {
				int num;
				cin >> num;
				v[r][c] += num;
			}
		}
	}
	
	for (auto vec : v) {
		for (int n : vec)
			cout << n << ' ';
		cout << '\n';
	}
}