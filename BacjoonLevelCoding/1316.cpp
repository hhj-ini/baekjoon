#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	// �׷� �ܾ �����ϴ� ���
	// ��� ���ĺ��� ���ؼ� find�� ���� �� ������ find�� 2�̻� ���̳��ٸ� �׷� �ܾ� �ƴ�.

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
				// ���ο� itr(res)�� ���� itr(before_res)�� 2�̻� ���̳��� �׷� �ܾ �ƴ�

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