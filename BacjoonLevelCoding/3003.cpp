#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// ŷ, ��, ��, ���, ����Ʈ, �� ����
	// 1, 1, 2, 2, 2, 8 �� ����

	vector<int> v{ 1, 1, 2, 2, 2, 8 };

	vector<int> iv;
	int a;
	while (cin >> a)
		iv.push_back(a);

	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] - iv[i] << ' ';
	}
}