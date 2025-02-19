#include <iostream>

using namespace std;

void main2525()
{
	int A, B, C;
	cin >> A >> B >> C;

	B += C % 60;
	if (B >= 60) {
		B -= 60;
		++A;
	}

	A += C / 60;

	if (A > 23) {
		A -= 24;
	}
	
	cout << A << " " << B;

	
}