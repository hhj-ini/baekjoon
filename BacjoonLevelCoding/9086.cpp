#include <iostream>
#include <string>
#include <vector>

using namespace std;

void main9086()
{
	int t;
	cin >> t;

	for (int i = 0; i < t; ++i) {
		string str;
		cin >> str;
		cout << *str.begin() << *(str.end() - 1) << std::endl;
	}

}