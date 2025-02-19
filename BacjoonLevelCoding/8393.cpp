#include <iostream>

using namespace std;

void main8393()
{
	int N;
	cin >> N;
	int sum{ 0 };
	for (int i = 1; i <= N; ++i) {
		sum += i;
	}
	cout << sum;
}