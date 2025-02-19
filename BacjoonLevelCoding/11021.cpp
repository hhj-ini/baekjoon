#include <iostream>

using namespace std;

void main11021()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);
	int T;
	cin >> T;
	for (int i = 0; i < T; ++i) {
		int a, b;
		cin >> a >> b;
		cout << "Case #" << i + 1 << ": " << a + b << '\n';
	}

}