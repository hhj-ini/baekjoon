#include <iostream>
#include <vector>
#include <chrono>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;
	
	int D = 1;
	int C = 0;
	while (true) {
		if (0 == N % D) {
			++C;
		}

		if (C == K) {
			cout << D;
			return 0;
		}

		if (D == N) {
			break;
		}
		++D;
	}
	cout << 0;
}

// https://www.acmicpc.net/problem/2501

// Ǯ�̰���
// ������ Ǯ�̰����� �־��� ���� ��� ����� ���� �� 
// K��° ���� �������.
// �ٵ� ���� ��� ����� ���� �ʿ�� ���ٰ� �����ؼ� 
// ���� ���������� ����� ã���ִ� ����� �ٷ� ����ϰ� 
// while ���� ���������
// 