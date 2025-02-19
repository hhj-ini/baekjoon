#include <iostream>

using namespace std;

void main2884()
{
	int H, M;
	cin >> H >> M;
	M -= 45;
	if (M < 0) {
		--H;
		M = 60 + M;
		if (H < 0) {
			H = 23;
		}
	}
	cout << H << " " << M;
}