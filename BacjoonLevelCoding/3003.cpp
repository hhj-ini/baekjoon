#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// 킹, 퀸, 룩, 비숍, 나이트, 폰 개수
	// 1, 1, 2, 2, 2, 8 이 정상

	vector<int> v{ 1, 1, 2, 2, 2, 8 };

	vector<int> iv;
	int a;
	while (cin >> a)
		iv.push_back(a);

	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] - iv[i] << ' ';
	}
}