#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	vector<vector<char>> v(5, vector<char>(15, ' '));
	
	for (int i = 0; i < 5; ++i) {
		string str;
		cin >> str;
		for (int j = 0; j < str.length(); ++j) {
			v[i][j] = str[j];				
		}
	}

	// ������ �����صΰ� �����̸� ��� ���ϱ�
	
	for (int i = 0; i < 15; ++i) {
		for (int j = 0; j < 5; ++j) {
			if (v[j][i] != ' ')
				cout << v[j][i];
		}
	}
}