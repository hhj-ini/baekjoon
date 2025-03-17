#include <iostream>

using namespace std;

int RecursiveFunction(int N, int a, int sum)
{
	sum = 6 * a + sum;
	if (N <= sum + 1) {
		return a + 1;
	}
	else {
		return RecursiveFunction(N, a + 1, sum);
	}
}

// 6N + 6(N-1) + ... 
// 6N + 6(N+1) + ...

int main()
{
	int N;
	cin >> N;

	if (N != 1) {
		cout << RecursiveFunction(N, 1, 0);
	}
	else {
		cout << 1;
	}

}

// https://www.acmicpc.net/problem/2292

// �� ���� 1�� ���������� 1�� �����ؼ� 2��
// �� ���� 2�� ���������� 1�� �����ؼ� 3��

// �Ϲ�ȭ ��� 
// N��° ���� �鸮�� ����� a�� �ּ� ���� �����̸� 
// N�� 6a + 6(a-1) + 6(a-2) + ... + 6 + 1 ���� ����.

// N�� ���� 1�� �����ϸ鼭 ó������ �۾��� ���� a�� ���� �湮 Ƚ������ �� �� �ִ�. 

// �ʹ� �������
// �Ϲ�ȭ �ϴ°͵� �������, �Ϲ�ȭ �� ���� ����Լ� ���·� �����ؾ߰ڴ� �����ϴϱ� ��¥ ��������.
// ���� ������� ��� �ϴϱ� �ƴµ� �� ����Լ� ������ �ͼ����� ���� �� ����. ���� ���� �ؾ߰ڴ�.