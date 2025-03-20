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

// 풀이과정
// 이전의 풀이과정은 주어진 수의 모든 약수를 구한 후 
// K번째 수를 출력했음.
// 근데 굳이 모든 약수를 구할 필요는 없다고 생각해서 
// 현재 루프에서의 약수가 찾고있는 약수면 바로 출력하고 
// while 문을 벗어나도록함
// 