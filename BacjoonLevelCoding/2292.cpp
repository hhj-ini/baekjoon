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

// 한 변이 1인 정육각형은 1을 포함해서 2번
// 한 변이 2인 정육각형은 1을 포함해서 3번

// 일반화 결과 
// N번째 방을 들리는 방법중 a이 최소 방의 개수이면 
// N은 6a + 6(a-1) + 6(a-2) + ... + 6 + 1 보다 작음.

// N의 수를 1씩 증가하면서 처음으로 작아질 때의 a의 수가 방문 횟수임을 알 수 있다. 

// 너무 어려웠다
// 일반화 하는것도 어려웠고, 일반화 한 식을 재귀함수 형태로 구현해야겠다 생각하니까 진짜 막막했음.
// 쉬운 문제였어서 어떻게 하니까 됐는데 ㅠ 재귀함수 구현이 익숙하지 않은 것 같다. 연습 많이 해야겠다.