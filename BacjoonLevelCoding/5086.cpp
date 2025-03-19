#include <iostream>

using namespace std;

int main()
{
	while (true) {
		int A, B;
		cin >> A >> B;

		if (0 == A) {
			break;
		}

		if (0 == A % B) {
			cout << "multiple\n";
		}
		else if (0 == B % A) {
			cout << "factor\n";
		} 
		else {
			cout << "neither\n";
		}
	}
}

// https://www.acmicpc.net/problem/5086