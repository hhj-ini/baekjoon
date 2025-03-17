#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

// B진법 수 N

int main()
{
	string N;
	int B;
	cin >> N >> B;

	vector<unsigned int> v;
	// 숫자면 빼지 않고 그대로 숫자 사용해야 함.
	for (const char& elem : N) {
		char num = elem;
		if (elem >= 'A') {
			num = elem - 'A' + 10;
		}
		else {
			num = elem - '0';
		}
		v.push_back(num);
	}

	unsigned int answer = 0;

	for (long i = 0; i < v.size(); ++i) {
		answer += v[i] * pow(B, v.size() - 1 - i);
	}

	cout << answer;
}
// https://www.acmicpc.net/problem/2745

// 틀린 이유

// 1. 컴파일 에러
// cmath 헤더 추가 안함
// v.size() 의 반환형은 unsigned long

// 2. n의 자리 수를 역으로 접근해서 역으로 곱함
// ZZZZZ 는 모든 자리의 수가 같아서 풀이의 오류를 잡지 못했음
// 아래의 예제입력에서 잡음

// 3. 알파벳으로만 이루어진 수만을 생각했음.
// 

// 4. 위의 이유와 비슷하게 아스키 코드 변환 안해서 0~9 까지 아스키 코드의 수로 들어감;

// AB 14
// 정답 151
