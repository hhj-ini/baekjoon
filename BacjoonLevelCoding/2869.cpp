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
	//=============== 1차 시도

	//int Day = (V - A) / (A - B);
	//if (0 != Day) {
	//	++Day;	// - A 한 값을 더함
	//	if (0 != (V - A) % (A - B)) { // 다음날에 한 번 더 올라가야함
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
	//=============== 2차 시도 -> 성공은 함

	if (0 != (V - A) % (A - B)) { // 다음날에 한 번 더 올라가야함
		cout << (V - A) / (A - B) + 2;
	}
	else {
		cout << (V - A) / (A - B) + 1;
	}


	
}

// https://www.acmicpc.net/problem/2869

// 틀린 이유
// 1. 예상했지만 시간 초과
// while문같은거 돌지 말란 소리. 
// 수학적으로 계산해서 풀어야 함.


// 다른 사람들거 본 결과 내거 조건문 완저이 믕층
// 나머지의 문제였다. 
// 조건의 기준을 나머지로 잡았어야 했다. 