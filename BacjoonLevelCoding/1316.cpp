#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// 그룹 단어를 판정하는 방법
	// 모든 알파벳에 대해서 find를 했을 때 이전의 find와 2이상 차이난다면 그룹 단어 아님.

	int n;
	cin >> n;

	vector<string> v;

	string str;
	while (cin >> str) {
		v.push_back(str);
	}

	for (const string& s : v) {
		for (char i = 'a'; i <= 'z'; ++i) {
			auto res = find(s.begin(), s.end(), i);
			bool isGroup{ true };
			while (res != s.end()) {
				auto before_res = res;
				res = find(res + 1, s.end(), i);
				// 새로운 itr(res)와 원래 itr(before_res)가 2이상 차이나면 그룹 단어가 아님

				if (res == s.end()) {
					break;
				}
				if (res - before_res > 1) {
					isGroup = false;
					break;
				}
			}
			if (not isGroup) {
				--n;
				break;
			}
				
		}
	}
	cout << n;
}