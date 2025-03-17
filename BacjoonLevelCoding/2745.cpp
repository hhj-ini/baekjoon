#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// B���� �� N

int main()
{
	string N;
	int B;
	cin >> N >> B;

	vector<unsigned int> v;
	// ���ڸ� ���� �ʰ� �״�� ���� ����ؾ� ��.
	for (const char& elem : N) {
		char num = elem;
		if (elem >= 'A') {
			num = elem - 'A' + 10;
		}
		else {
			num = elem - '0';
		}
		v.push_back(num);
	}

	unsigned int answer = 0;

	for (long i = 0; i < v.size(); ++i) {
		answer += v[i] * pow(B, v.size() - 1 - i);
	}

	cout << answer;
}
// https://www.acmicpc.net/problem/2745

// Ʋ�� ����

// 1. ������ ����
// cmath ��� �߰� ����
// v.size() �� ��ȯ���� unsigned long

// 2. n�� �ڸ� ���� ������ �����ؼ� ������ ����
// ZZZZZ �� ��� �ڸ��� ���� ���Ƽ� Ǯ���� ������ ���� ������
// �Ʒ��� �����Է¿��� ����

// 3. ���ĺ����θ� �̷���� ������ ��������.
// 

// 4. ���� ������ ����ϰ� �ƽ�Ű �ڵ� ��ȯ ���ؼ� 0~9 ���� �ƽ�Ű �ڵ��� ���� ��;

// AB 14
// ���� 151
