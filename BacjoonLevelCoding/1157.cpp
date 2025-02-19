#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	string str;
	cin >> str;
	transform(str.begin(), str.end(), str.begin(), [](char& c) {
		return toupper(c);
		});

	// cout << str;
	vector<int> v(26);

	for (const char& c : str) {
		++v[c - 'A'];
	}
	
	/*for (const int& a : v)
		cout << a << ' ';
	cout << endl;*/

	auto max_first = max_element(v.begin(), v.end());

	auto res = find(max_first+1, v.end(), *max_first);

	if (res == v.end())	// 여러 개 존재하지 않을 때
		cout << static_cast<char>(max_first - v.begin() + 'A');
	else
		cout << "?";
}