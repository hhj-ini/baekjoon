#include <iostream>
#include <vector>

using namespace std;

// ù°�ٿ� �׽�Ʈ���̽� ����
// 

int main()
{
	int T;
	cin >> T;

	vector<int> v;

	int C;

	for (int i = 0; i < T; ++i) {
		cin >> C;
		v.push_back(C);
	}

	for (int& elem : v) {
		cout << elem / 25 << ' ';
		elem = elem % 25;

		cout << elem / 10 << ' ';
		elem = elem % 10;

		cout << elem / 5 << ' ';
		elem = elem % 5;

		cout << elem << ' ' << endl;
	}
	
}

// https://www.acmicpc.net/problem/2720

// ū ���� ���� �б� 