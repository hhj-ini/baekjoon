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

	int Row = X - ((F-1)*(F)) / 2;	// 행 = 현재 수 - 이전 층의 마지막 수
	int Col = F + 1 - Row;			// 행 + 열 = F + 1;

	if (0 != F % 2) {
		cout << Col << '/' << Row;
	}
	else {
		cout << Row << '/' << Col;
	}
}

// https://www.acmicpc.net/problem/1193

// 풀이 과정
// 1. 일반화 과정
// 주어진 수가 몇번째 대각선인지(층) 구함
// 주어진 수가 해당 대각선에서 몇번째 수인지 구함. --> 행을 알 수 있음
// 행+열 = 층+1 식을 구함.
// 위의 조건을 하나씩 해결하도록 함.