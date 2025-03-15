#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int num; 
	cin >> num;

	vector<vector<bool>> v(100, vector<bool>(100, false));
	
	for (int i = 0; i < num; ++i) {
		int x, y;
		cin >> x >> y;

		for (int a = x; a < x + 10; ++a) {
			for (int b = y; b < y + 10; ++b) {
				v[a][b] = true;
			}
		}
	}

	int cnt = 0;

	for (const auto& vec : v) {
		const int curr_vec_cnt = count(vec.begin(), vec.end(), true);
		cnt += curr_vec_cnt;
	}

	cout << cnt;

}

//int main()
//{
//	// ��ȭ���� ũ�� : ���� * ���� = 100 * 100
//	// �������� ũ�� : ���� * ���� = 10 * 10
//	// �������� �� - 100 ����
//
//	int num; 
//	cin >> num;	// ������ ��
//	
//	vector<pair<int, int>> v;
//	v.reserve(100);
//
//	for (int i = 0; i < num; ++i) {
//		int a, b;
//		cin >> a >> b;
//		v.push_back(make_pair(a, b));
//	}
//
//	sort(v.begin(), v.end());
//	auto i = unique(v.begin(), v.end());
//	v.erase(i, v.end());
//	num = v.size();
//	int sum = num * 100;
//	
//	// nC2 ���� : n�� �� 2�� �����ؼ� �� �����̰� ��ġ���� �˻�
//	if (num >= 2) {	// n �� 2 ���� Ŭ ���� ���� ����
//		vector<bool> comvec(num, false);
//
//		comvec[0] = true;
//		comvec[1] = true;
//		// 2���� �����ϱ� ���� n�� �� 2���� true�� vector ����
//		// prev_permutation() �� ���ؼ� true�� �ε��� 2���� ��� �� �ΰ��� ���� ���� ��.
//
//		do {
//			vector<pair<int, int>> selected;
//
//			for (int i = 0; i < num; ++i) {
//				if (comvec[i] == true) {
//					selected.push_back(v[i]);
//				}
//			}
//			//int x = (selected[0].first - selected[1].first);
//			//int y = (selected[0].second - selected[1].second);
//			//if (x < 10 && y < 10) { //&& x >= 0 && y >= 0
//			//	sum -= (x) * (y);
//			//	if (x == 0 || y == 0) {
//			//		int a = x == y ? 100 : x > y ? x * 10 : y * 10;
//			//		sum -= a;
//			//	}
//			//}
//
//
//			
//
//			
//
//
//			if (selected[0].first - 10 < selected[1].first && selected[1].first < selected[0].first + 10) {
//				if (selected[0].second - 10 < selected[1].second && selected[1].second < selected[0].second + 10) {
//					int extent;
//					if (selected[0].first > selected[1].first && selected[0].second > selected[1].second) {	// 1
//						extent = (selected[1].first + 10 - selected[0].first) * (selected[1].second + 10 - selected[0].second);
//					}
//					else if (selected[0].first < selected[1].first && selected[0].second > selected[1].second) {// 2
//						extent = (selected[0].first + 10 - selected[1].first) * (selected[1].second + 10 - selected[0].second);
//					}
//					else if (selected[0].first > selected[1].first && selected[0].second < selected[1].second) { // 3
//						extent = (selected[1].first + 10 - selected[0].first) * (selected[0].second + 10 - selected[1].second);
//					}
//					else if (selected[0].first < selected[1].first && selected[0].second < selected[1].second) { // 4
//						extent = (selected[0].first + 10 - selected[1].first) * (selected[0].second + 10 - selected[1].second);
//					}
//					else if (selected[0].first == selected[1].first && selected[0].second > selected[1].second) {// 2
//						extent = 10 * (selected[1].second + 10 - selected[0].second);
//					}
//					else if (selected[0].first == selected[1].first && selected[0].second < selected[1].second) { // 3
//						extent = 10 * (selected[0].second + 10 - selected[1].second);
//					}
//					else if (selected[0].first < selected[1].first && selected[0].second == selected[1].second) {// 2
//						extent = (selected[0].first + 10 - selected[1].first) * 10;
//					}
//					else if (selected[0].first > selected[1].first && selected[0].second == selected[1].second) { // 3
//						extent = (selected[1].first + 10 - selected[0].first) * 10;
//					}
//					else {
//						extent = 100;
//					}
//
//					// 0 0
//					// 0 5
//					// 5 0
//					
//					// 3�� ��ġ�� �κп��� 2�� ��
//
//					//else {	// x�� y�� ���� ��
//					//	if (selected[0].first == selected[1].first && selected[0].second == selected[1].second) {
//					//		extent = 100;
//					//	} 
//					//	else if (selected[0].first == selected[1].first) {
//					//		extent = 10 * 
//					//	}
//					//	else {
//
//					//	}
//					//	// x �� ����
//					//	// y�� ����
//					//	// �Ѵ� ����
//					//}
//
//					sum -= extent;
//
//				/*	sum -= (x) * (y);
//					if (x == 0 || y == 0) {
//						int a = x == y ? 100 : x > y ? x * 10 : y * 10;
//						sum -= a;
//					}
//					
//					
//					int x = (selected[0].first - selected[1].first);
//						int y = (selected[0].second - selected[1].second);
//						extent = x == y ? 100 : x > y ? x * 10 : y * 10;
//						*/
//				}
//			}
//			
//		} while (prev_permutation(comvec.begin(), comvec.end()));
//	}
//	cout << sum;
//}


// 3, 15 / 15, 3
// x = -12 / x = 12 -> if (x < 10 && y < 10) ���ǿ� ��� �ȵ�! 
// 

// �����̰� ��ġ�� ���
// 

// x �������� ��
// y �������� ��
// �Ѵ� ����� �׶� ��ġ�� �κ� ����

// if ( selected[0].first - 10 < selected[1].first < selected[0].first + 10) 
// 

/*
3
0 0
0 5
5 0
*/

// 3�� �̻��� �����̰� ��ġ�� �κ��� ��ó���� ���ϰ� �ִ�.
// 2�� ���� ���ؼ� ���� ��ġ�� �׺κп� ���� ���̸� �����ϴ� ������ ä��
// 
