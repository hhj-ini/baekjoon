#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	int n;

	
	while (cin >> n) {
		if (n == -1)
			break;
		int d = 1;
		vector<int> v;
		while (true) {
			if (n == d)
				break;

			if (n % d == 0) {
				v.push_back(d);
			}
			++d;
		}

		auto sum = accumulate(v.begin(), v.end(), 0);
		cout << n << ' ';
		if (sum == n) {
			cout << "= " << v[0];
			for (auto i = v.begin() + 1; i < v.end(); ++i) {
				cout << " + " << *i;
			}
			cout << endl;
		}
		else {
			cout << "is NOT perfect.\n";
		}
	}
}

// https://www.acmicpc.net/problem/9506

// 2 < n < 100,000