#include <iostream>

using namespace std;

int main()
{
	while (true) {
		int A, B;
		cin >> A >> B;

		if (0 == A) {
			break;
		}

		if (0 == A % B) {
			cout << "multiple\n";
		}
		else if (0 == B % A) {
			cout << "factor\n";
		} 
		else {
			cout << "neither\n";
		}
	}
}

// https://www.acmicpc.net/problem/5086

// �Է����� ������ �� ���� ���� �ٸ� 10000 ������ �ڿ���.

// �־��� �������� ���ؼ�
// A%B �� 0�̸� A�� B�� ����� ( A != B �̱� ������ �������� 0�̶�� ������ ����� �� �ۿ� ����)
// 0�� �ƴ϶�� B�� A���� ũ�ų� / B�� A���� �����鼭 B�� A�� ����� �ƴ�.(A�� B�� ����� �ƴ�)
// 
// B%A �� 0�̸� A�� B�� �����. ���� ���ǿ��� B�� A���� ū ���.
//
// ���� �� ��찡 �ƴϸ� 
// B�� A���� �����鼭 B�� A�� ����� �ƴ�
// B�� A���� ũ�鼭 B�� A�� ����� �ƴ�. 
// �� �ƹ��͵� �ƴϱ⶧���� neither ���.