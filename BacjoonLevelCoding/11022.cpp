#include <iostream>

using namespace std;

void main11022()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	cout.sync_with_stdio(false);

	int T;
	cin >> T;
	for (int i = 1; i <= T; ++i) {
		int a, b;
		cin >> a >> b;
		cout << "Case #" << i << ": " << a << " + " << b << " = " << a + b << '\n';
	}
}