//#include <iostream>
//#include <string>
//#include <vector>
//#include <unordered_map>
//#include <algorithm>
//
//using namespace std;
//
//void main5622()
//{
//	string str;
//	cin >> str;
//
//	unordered_map<int, vector<char>> um;
//	um.insert(make_pair(2, vector<char>{'A', 'B', 'C'}));
//	um.insert(make_pair(3, vector<char>{'D', 'E', 'F'}));
//	um.insert(make_pair(4, vector<char>{'G', 'H', 'I'}));
//	um.insert(make_pair(5, vector<char>{'J', 'K', 'L'}));
//	um.insert(make_pair(6, vector<char>{'M', 'N', 'O'}));
//	um.insert(make_pair(7, vector<char>{'P', 'Q', 'R', 'S'}));
//	um.insert(make_pair(8, vector<char>{'T', 'U', 'V'}));
//	um.insert(make_pair(9, vector<char>{ 'W', 'X', 'Y', 'Z'}));
//
//	int sum{ static_cast<int>(str.length())};
//
//	for (int i = 0; i < static_cast<int>(str.length()); ++i) {
//		for (pair<int, vector<char>> elem : um) {
//			auto res = find(elem.second.begin(), elem.second.end(), str[i]);
//			if (res != elem.second.end())
//				sum += elem.first;
//		}
//	}
//	cout << sum;
//}

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	
	vector<pair<int, vector<char>>> um;
	um.push_back(make_pair(2, vector<char>{'A', 'B', 'C'}));
	um.push_back(make_pair(3, vector<char>{'D', 'E', 'F'}));
	um.push_back(make_pair(4, vector<char>{'G', 'H', 'I'}));
	um.push_back(make_pair(5, vector<char>{'J', 'K', 'L'}));
	um.push_back(make_pair(6, vector<char>{'M', 'N', 'O'}));
	um.push_back(make_pair(7, vector<char>{'P', 'Q', 'R', 'S'}));
	um.push_back(make_pair(8, vector<char>{'T', 'U', 'V'}));
	um.push_back(make_pair(9, vector<char>{ 'W', 'X', 'Y', 'Z'}));

	int sum{ static_cast<int>(str.length()) };

	for (int i = 0; i < static_cast<int>(str.length()); ++i) {
		for (pair<int, vector<char>> elem : um) {
			auto res = find(elem.second.begin(), elem.second.end(), str[i]);
			if (res != elem.second.end())
				sum += elem.first;
		}
	}
	cout << sum;
}