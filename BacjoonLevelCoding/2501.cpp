#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int D = 1;

	vector<int> v;
	while (true) {
		if (0 == N % D) {
			v.push_back(D);
		}

		if (D == N) {
			break;
		}
		++D;
	}

	if (v.size() >= K) {
		cout << v[K - 1];
	}
	else {
		cout << 0;
	}
}

// https://www.acmicpc.net/problem/2501

// Ǯ�̰���
// ���Ϳ� ��� ����� ������ ������ 
// �ش� ��°�� �����Ѵٸ� []�� �����ؼ� �� ���
// �ش� ��° �������� ������ else �� ����ؼ� 0 ���