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

// 입력으로 들어오는 두 수는 서로 다른 10000 이하의 자연수.

// 주어진 조건으로 인해서
// A%B 가 0이면 A는 B의 배수임 ( A != B 이기 때문에 나머지가 0이라면 무조건 배수일 수 밖에 없음)
// 0이 아니라면 B는 A보다 크거나 / B가 A보다 작으면서 B가 A의 약수가 아님.(A가 B의 배수가 아님)
// 
// B%A 가 0이면 A는 B의 약수임. 위의 조건에서 B가 A보다 큰 경우.
//
// 위의 두 경우가 아니면 
// B가 A보다 작으면서 B가 A의 약수가 아님
// B가 A보다 크면서 B가 A의 배수가 아님. 
// 즉 아무것도 아니기때문에 neither 출력.