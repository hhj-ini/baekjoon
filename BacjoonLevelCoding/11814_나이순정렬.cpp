#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int N;
	cin >> N;

	//multimap<int, string> m;
	vector<pair<int, string>> v;
	
	v.reserve(N);	// capacity�� �̸� �����ϴ� �޼ҵ�.

	string str;
	int old;

	while (cin >> old && cin >> str) {
		//m.emplace(make_pair(old, str));
		v.emplace_back(make_pair(old, str));
		str.clear();
	}

	stable_sort(v.begin(), v.end(), [](const pair<int, string>& a, const pair<int, string>& b) {
		return a.first < b.first;
		});

	// stable ������ ����ؾ��� ���� ���� ���� ������!

	/*for (const pair<int, string>& elem : m)
	{
		cout << elem.first << " " << elem.second << endl;
	}

	cout << "========" << endl;*/

	for (const pair<int, string>& elem : v)
	{
		cout << elem.first << " " << elem.second << endl;
	}


	//cout << "========" << endl;
	// ���̼�, ������ ��
	// �Է��� ������ ����.
	// ����, �̸�
	// �ߺ��� ����ε�?
	
	// 1. �����̳� ���ϱ�
	// �׳� ��Ƽ������ ����� �ߺ��� ó���ǰ� ���� ������ �ɰŰ�����?
	// �ƴϴ�
	// �Է½ð��� ���ذ� �����ϱ� ������ ������ �����ϱ� vector�� �ص� �ɵ�?
	
	// 1) vector
	// �Է� �� sorting, unique �۾� �ʿ�
	// �̸� ������ ������ ������ �޸� �ѹ��� �Ҵ� ����.
	// sorting �� �����ϸ� ��. 
	// �ߺ� ��������� �𸣰����� ������ �ʿ��� �׳� ���̰��� ���ؼ� sorting �ϸ� �ɵ�?

	// ���Ժ��⵵ O(1)
	// 



	
}


/*
https://www.acmicpc.net/status?from_mine=1&problem_id=10814&user_id=itree1030
*/