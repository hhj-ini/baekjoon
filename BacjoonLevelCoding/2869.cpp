#include <iostream>

using namespace std;

int main()
{
	int A, B, V;
	cin >> A >> B >> V;

	/*int CurrV = 0;
	int Day = 0;
	while (true) {
		CurrV += A;
		++Day;
		if (V <= CurrV) {
			break;
		}
		CurrV -= B;
	}*/
	//=============== 1�� �õ�

	//int Day = (V - A) / (A - B);
	//if (0 != Day) {
	//	++Day;	// - A �� ���� ����
	//	if (0 != (V - A) % (A - B)) { // �������� �� �� �� �ö󰡾���
	//		++Day;	
	//	}
	//}
	//else {
	//	int CurrV = 0;
	//	Day = 0;
	//	while (true) {
	//		CurrV += A;
	//		++Day;
	//		if (V <= CurrV) {
	//			break;
	//		}
	//		CurrV -= B;
	//	}
	//}
	//cout << Day;
	//=============== 2�� �õ� -> ������ ��

	if (0 != (V - A) % (A - B)) { // �������� �� �� �� �ö󰡾���
		cout << (V - A) / (A - B) + 2;
	}
	else {
		cout << (V - A) / (A - B) + 1;
	}


	
}

// https://www.acmicpc.net/problem/2869

// Ʋ�� ����
// 1. ���������� �ð� �ʰ�
// while�������� ���� ���� �Ҹ�. 
// ���������� ����ؼ� Ǯ��� ��.


// �ٸ� ������ �� ��� ���� ���ǹ� ������ ����
// �������� ��������. 
// ������ ������ �������� ��Ҿ�� �ߴ�. 