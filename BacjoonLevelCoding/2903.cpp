#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	unsigned int D = 2;
	for (int i = 0; i < N; ++i) {
		D = 2 * D - 1;
	}

	cout << D * D;
}


// 틀린 이유
// 정수의 제곱 계산을 수행할 때 pow 를 사용하면 안된다.