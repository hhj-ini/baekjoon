#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int C = 0;

	int S;
	while (cin >> S) {
		// S�� �Ҽ���
		// ++C;

		// �ƴϸ�
		// break;

if (S != 1) {
			int D = 2;
			bool B = false;
			while (D < S) {
				if (S % D == 0) {
					B = true;
					break;
				}
				++D;
			}

			if (!B) {
				++C;
			}
		}
	}

	cout << C;
}

// https://www.acmicpc.net/problem/1978

// �Ҽ��� �󸶳� ȿ�������� ã����

// Ʋ�� ����
// ������ �ݺ��������� 2�� ������ ����.

//�ƴϾ���. 2�� ���ǹ��� ������� ����ä�� false�� �Ǽ�
// �Ҽ��� ������ ��.

// �ƿ� ������ �߸��ƾ���
// �Ҽ��� ã�°� �ƴ϶� ¦���� ã�·����̾���
