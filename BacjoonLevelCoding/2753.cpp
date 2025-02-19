#include <iostream>

using namespace std;

void main2753()
{
	int Y;
	cin >> Y;
	cout << (Y % 4 == 0 && (Y % 100 != 0 || Y % 400 == 0));
}