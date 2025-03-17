#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, B;
	cin >> N >> B;

	vector<char> v;

	int a = N % B;
	do {
		N /= B;
		char c;
		if (a > 9) {
			c = 'A' + (a - 10);
		}
		else {
			c = a + '0';
		}
		v.push_back(c);
		a = N % B;
	} while (N >= B || a != 0);

	for (auto i = v.rbegin(); i != v.rend(); ++i) {
		cout << *i;
	}
}

// https://www.acmicpc.net/problem/11005

// 4 2 
// �� : 100
// ��� : 0

// 1. N�� B�� ���� ��쿡�� while �� �� �� �ֵ��� �ؾ���.

