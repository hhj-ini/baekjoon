#include <iostream>

using namespace std;

void main15552()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int T;
	cin >> T;
	for (int i = 0; i < T; ++i) {
		int a, b;
		cin >> a >> b;
		cout << a + b << '\n';
	}
}