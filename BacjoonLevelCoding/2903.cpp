#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	unsigned int D = 2;
	for (int i = 0; i < N; ++i) {
		D = 2 * D - 1;
	}

	cout << D * D;
}


// Ʋ�� ����
// ������ ���� ����� ������ �� pow �� ����ϸ� �ȵȴ�.