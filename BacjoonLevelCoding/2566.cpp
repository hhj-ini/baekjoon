#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<vector<int>> v(9, vector<int>(9, 0));

	for (int i = 0; i < 9; ++i) {
		for (int j = 0; j < 9; ++j) {
			cin >> v[i][j];
		}
	}

	auto result = max_element(v.begin(), v.end(), [](const auto& a, const auto& b) {
		auto i = max_element(a.begin(), a.end());
		auto j = max_element(b.begin(), b.end());

		return *i < *j;
		});
	// 가장 큰 수가 들어있는 행을 찾음.
	int row = result - v.begin() + 1;	// 행
	auto result2 = max_element(result->begin(), result->end());	// 가장 큰 수의 반복자
	int col = result2 - result->begin() + 1;	// 열

	cout << *result2<< '\n' << row<< ' ' << col;
}