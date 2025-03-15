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
//	// 도화지의 크기 : 가로 * 세로 = 100 * 100
//	// 색종이의 크기 : 가로 * 세로 = 10 * 10
//	// 색종이의 수 - 100 이하
//
//	int num; 
//	cin >> num;	// 색종이 수
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
//	// nC2 조합 : n개 중 2개 선택해서 두 색종이가 겹치는지 검사
//	if (num >= 2) {	// n 이 2 보다 클 때만 조합 수행
//		vector<bool> comvec(num, false);
//
//		comvec[0] = true;
//		comvec[1] = true;
//		// 2개만 선택하기 위해 n개 중 2개만 true인 vector 생성
//		// prev_permutation() 에 의해서 true인 인덱스 2개를 골라 그 두개를 서로 비교할 것.
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
//					// 3번 겹치는 부분에서 2번 뺌
//
//					//else {	// x나 y가 같은 것
//					//	if (selected[0].first == selected[1].first && selected[0].second == selected[1].second) {
//					//		extent = 100;
//					//	} 
//					//	else if (selected[0].first == selected[1].first) {
//					//		extent = 10 * 
//					//	}
//					//	else {
//
//					//	}
//					//	// x 가 같음
//					//	// y가 같음
//					//	// 둘다 같음
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
// x = -12 / x = 12 -> if (x < 10 && y < 10) 조건에 통과 안됨! 
// 

// 색종이가 겹치는 경우
// 

// x 기준으로 비교
// y 기준으로 비교
// 둘다 통과면 그때 겹치는 부분 빼기

// if ( selected[0].first - 10 < selected[1].first < selected[0].first + 10) 
// 

/*
3
0 0
0 5
5 0
*/

// 3개 이상의 색종이가 겹치는 부분은 대처하지 못하고 있다.
// 2개 끼리 비교해서 서로 겹치면 그부분에 대한 넓이를 차감하는 형식을 채택
// 
