#include <iostream>

using namespace std;

void main2438()
{
	int N;
	cin >> N;
	for (int i = 0; i < N; ++i) {
		for (int j = 0; j <= i; ++j) {
			cout << "*";
		}
		cout << '\n';
	}
}