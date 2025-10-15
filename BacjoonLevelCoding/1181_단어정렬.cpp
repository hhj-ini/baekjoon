#include <iostream>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

int main()
{
	int N;
	cin >> N;
	
	list<string> l;

	string s;
	while (cin >> s)
	{
		l.emplace_back(s);
		s.clear();
	}


	l.sort();
	l.sort([](const string& a, const string& b) {
		return a.length() < b.length();
		});

	l.unique();	// unique �� ���ĵ� ���¿����� ����� �۵���.

	for (const string& str : l) {
		cout << str << endl;
	}

	// �ϼ��� �����̳ʰ� ������ �� ����
	// 1. ���ĵ� ������ ��
	// 2. �ߺ� ����� --> ������ ����� ����?
	// -> ���� ���� list
}

/*
https://www.acmicpc.net/status?user_id=itree1030&problem_id=1181&from_mine=1
*/