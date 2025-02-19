#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void main2908()
{
	string s1, s2;
	cin >> s1 >> s2;

	reverse(s1.begin(), s1.end());
	reverse(s2.begin(), s2.end());
	int a = stoi(s1);
	int b = stoi(s2);

	if (a > b) {
		cout << a;
	}
	else {
		cout << b;
	}
}