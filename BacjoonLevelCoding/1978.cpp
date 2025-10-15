#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;
	int C = 0;

	int S;
	while (cin >> S) {
		// S가 소수면
		// ++C;

		// 아니면
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

// 소수를 얼마나 효율적으로 찾는지

// 틀린 이유
// 지금의 반복문에서는 2를 평가하지 못함.

//아니었음. 2는 조건문을 통과하지 않은채로 false가 되서
// 소수에 포함이 됨.

// 아예 로직이 잘못됐었음
// 소수를 찾는게 아니라 짝수를 찾는로직이었음
