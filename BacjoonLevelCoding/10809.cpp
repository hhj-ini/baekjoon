#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void main10809()
{
	string str;
	cin >> str;

	for (char a = 'a'; a <= 'z'; ++a) {
		auto res = std::find(str.begin(), str.end(), a);
		if (res != str.end()) {
			cout << res - str.begin() << ' ';
		}
		else {
			cout << -1 << ' ';
		}
	}
}