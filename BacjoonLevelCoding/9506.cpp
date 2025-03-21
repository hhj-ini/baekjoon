#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	int n;

	
	while (cin >> n) {
		if (n == -1)
			break;
		int d = 1;
		vector<int> v;
		while (true) {
			if (n == d)
				break;

			if (n % d == 0) {
				v.push_back(d);
			}
			++d;
		}

		auto sum = accumulate(v.begin(), v.end(), 0);
		cout << n << ' ';
		if (sum == n) {
			cout << "= " << v[0];
			for (auto i = v.begin() + 1; i < v.end(); ++i) {
				cout << " + " << *i;
			}
			cout << endl;
		}
		else {
			cout << "is NOT perfect.\n";
		}
	}
}

// https://www.acmicpc.net/problem/9506

// 2 < n < 100,000

// 풀이과정
// 
// 입력을 받을 수 있다면 계속 while 루프를 돌아서 
// 입력된 값에 대해 답을 도출하는 작업을 함.
// scope 가 가장 큰 while 문이 들어온 숫자에 대해서 작업하는 단위.
// 
// 입력된 값이 -1 이라면 while 루프를 종료함
// 
//  작은 while 문에서는 주어진 값의 약수를 vector에 push_back 하는 과정
// 자신을 제외한 모든 약수들을 구함.
// 
// 약수들이 들어있는 vector의 모든 값을 더해서 그 값이 자신과 같다면 완전수임.
// 완전수는 해당 벡터에 있는 값을 순회해서 식을 출력하고
// 완전수가 아니라면 문제에서 주어진 문자열을 출력함.