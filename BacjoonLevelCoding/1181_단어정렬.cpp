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

	l.unique();	// unique 는 정렬된 상태에서만 제대로 작동됨.

	for (const string& str : l) {
		cout << str << endl;
	}

	// 완성된 컨테이너가 가져야 할 조건
	// 1. 정렬된 상태일 것
	// 2. 중복 미허용 --> 삭제가 빈번할 지도?
	// -> 나의 결정 list
}

/*
https://www.acmicpc.net/status?user_id=itree1030&problem_id=1181&from_mine=1
*/