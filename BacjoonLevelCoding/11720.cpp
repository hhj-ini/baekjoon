#include <iostream>
#include <string>

using namespace std;

void main11720()
{
	int n;
	cin >> n;

	string str;
	cin >> str;
	int a = 0;
	for (int i = 0; i < str.length(); i++) {
		a += str[i] - '0';
	}
	cout << a;
}