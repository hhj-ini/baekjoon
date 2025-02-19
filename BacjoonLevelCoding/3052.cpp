#include <iostream>
#include <set>

using namespace std;

void main3052()
{
	set<int> cont;

	int num;
	while (cin >> num) {
		cont.insert(num % 42);
	}

	cout << cont.size();
}