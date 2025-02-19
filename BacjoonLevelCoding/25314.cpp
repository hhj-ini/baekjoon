#include <iostream>
#include <string>

using namespace std;

void main25314()
{
	int N;
	cin >> N;
	string str{};
	str.reserve(1000);
	while (N > 0) {
		N -= 4;
		str = str + "long ";
	}
	cout << str + "int";
}