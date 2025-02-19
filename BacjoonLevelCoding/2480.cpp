#include <iostream>
#include <cmath>
using namespace std;

void main2480()
{
	int A, B, C;
	cin >> A >> B >> C;
	if ((A == B)&&(B == C)) {
		cout << A * 1000 + 10000;
	}
	else if (not ((A!=B)&&(B!=C)&&(A!=C))){
		if (A == B) {
			cout << A * 100 + 1000;
		}
		else {
			cout << C * 100 + 1000;
		}
	}
	else {
		int val = max(A, B);
		val = max(val, C);
		cout << val * 100;
	}
}