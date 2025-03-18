#include <iostream>

using namespace std;

int main()
{
	int X;
	cin >> X;

	int F = 1;	// floor

	int FSum = 0;
	while (true) {
		FSum = FSum + F;
		if (X <= FSum) {
			break;
		}
		++F;
	}

	// cout << F;

	int Row = X - ((F-1)*(F)) / 2;	// �� = ���� �� - ���� ���� ������ ��
	int Col = F + 1 - Row;			// �� + �� = F + 1;

	if (0 != F % 2) {
		cout << Col << '/' << Row;
	}
	else {
		cout << Row << '/' << Col;
	}
}

// https://www.acmicpc.net/problem/1193

// Ǯ�� ����
// 1. �Ϲ�ȭ ����
// �־��� ���� ���° �밢������(��) ����
// �־��� ���� �ش� �밢������ ���° ������ ����. --> ���� �� �� ����
// ��+�� = ��+1 ���� ����.
// ���� ������ �ϳ��� �ذ��ϵ��� ��.