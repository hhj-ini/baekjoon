#include <iostream>

using namespace std;

void main2439()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; ++i) {
		for (int j = 1; j < N - i; ++j) {
			cout << ' ';
		}
		for (int j = 0; j <= i; ++j) {
			cout << "*";
		}
		cout << '\n';
	}
}