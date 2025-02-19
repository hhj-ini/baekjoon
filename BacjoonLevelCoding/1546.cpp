#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

void main1546()
{
	int n;
	cin >> n;
	vector<double> test;
	test.reserve(1000);
	for (int i = 0; i < n; ++i) {
		int score;
		cin >> score;
		test.push_back(score);
	}

	auto max = *(std::max_element(test.begin(), test.end()));

	for (double& elem : test) {
		elem = elem / max * 100;
	}
	
	double sum = std::accumulate(test.begin(), test.end(), static_cast<double>(0));
	
	cout.precision(10);
	cout << sum / test.size();
}
