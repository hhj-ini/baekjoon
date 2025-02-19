#include <iostream>
#include <string>
#include <vector>
#include <unordered_map>
#include <numeric>

using namespace std;

int main()
{
	// 입력은 20줄
	// 과목명, 학점, 등급

	vector<pair<double, double>> v;
	unordered_map<string, double> m{
		{"A+", 4.5}, {"A0", 4.0}, {"B+", 3.5}, {"B0", 3.0},
		{"C+", 2.5}, {"C0", 2.0}, {"D+", 1.5}, {"D0", 1.0}, {"F", 0.0}
	};

	string obj;
	double d;
	string score;

	for (int i = 0; i < 20; ++i) {
		cin >> obj;
		cin >> d;
		cin >> score;
		if (score != "P") 
			v.push_back(make_pair(d, m[score]));
	}

	double sum = accumulate(v.begin(), v.end(), static_cast<double>(0), [](double& sum, pair<double, double>& p) {
		return sum + (p.first * p.second);
		});
	double credit = accumulate(v.begin(), v.end(), static_cast<double>(0), [](double& sum, pair<double, double>& p)
	{
			return sum + p.first;
	});
	cout.precision(7);

	cout << sum / credit;

}