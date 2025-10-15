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
	
	v.reserve(N);	// capacity를 미리 예약하는 메소드.

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

	// stable 정렬을 사용해야지 원래 들어온 순서 지켜짐!

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
	// 나이순, 가입한 순
	// 입력은 가입한 순임.
	// 나이, 이름
	// 중복은 허용인듯?
	
	// 1. 컨테이너 정하기
	// 그냥 멀티맵으로 만들면 중복도 처리되고 들어온 순으로 될거같은데?
	// 아니다
	// 입력시간의 손해가 있으니까 어차피 삭제가 없으니까 vector로 해도 될듯?
	
	// 1) vector
	// 입력 후 sorting, unique 작업 필요
	// 미리 갯수가 들어오기 때문에 메모리 한번에 할당 가능.
	// sorting 만 생각하면 됨. 
	// 중복 허용인지는 모르겠지만 삭제도 필요없어서 그냥 나이값에 대해서 sorting 하면 될듯?

	// 삽입복잡도 O(1)
	// 



	
}


/*
https://www.acmicpc.net/status?from_mine=1&problem_id=10814&user_id=itree1030
*/