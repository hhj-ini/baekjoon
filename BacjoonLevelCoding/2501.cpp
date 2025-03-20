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

// 풀이과정
// 벡터에 모든 약수들 저장한 다음에 
// 해당 번째가 존재한다면 []로 접근해서 답 출력
// 해당 번째 존재하지 않으면 else 문 통과해서 0 출력