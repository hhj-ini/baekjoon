#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string s1;
	cin >> s1;

	string s2{ s1 };
	reverse(s2.begin(), s2.end());

	cout << (s1 == s2);
}
