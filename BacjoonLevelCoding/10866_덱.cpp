#include <iostream>

using namespace std;

class NODE {
public:
	NODE(int x) : value{ x }
	{
		next = nullptr;
		prev = nullptr;
	}

	int value;
	NODE* next;
	NODE* prev;
};

class DEQUE {
public:
	DEQUE() :mSize{0}
	{
		head = new NODE(-1);
		tail = new NODE(-1);
		
		head->next = tail;
		tail->prev = head;
	}

	void push_front(int x)
	{
		auto a = new NODE(x);
		auto before_front = head->next;

		a->next = before_front;
		a->prev = head;
		before_front->prev = a;
		head->next = a;
		++mSize;
	}

	void push_back(int x)
	{
		auto a = new NODE(x);
		auto before_tail = tail->prev;

		a->next = tail;
		a->prev = before_tail;
		before_tail->next = a;
		tail->prev = a;
		++mSize;
	}

	int pop_front()
	{
		if (head->next != tail) {	// head->next == tail -> 비어있는 deque
			auto a = head->next;
			int res = a->value;
			
			auto b = a->next;
			head->next = b;
			b->prev = head;

			delete a;
			--mSize;
			return res;
		}
		return -1;
	}

	int pop_back()
	{
		if (tail->prev != head) {
			int res = tail->prev->value;
			auto a = tail->prev;

			auto b = a->prev;

			tail->prev = b;
			b->next = tail;

			delete a;
			--mSize;
			return res;
		}
		return -1;
	}

	int size()
	{
		return mSize;
	}

	int empty()
	{
		return head->next == tail;
	}

	int front()
	{
		return head->next->value;
	}

	int back()
	{
		return tail->prev->value;
	}
private:
	int mSize;
	NODE* head;
	NODE* tail;
};

int main()
{
	int N;
	cin >> N;

	DEQUE d;

	string str;
	int x;
	while (cin >> str)
	{
		if ("push_back" == str) {
			cin >> x;
			d.push_back(x);
		}
		else if ("push_front" == str) {
			cin >> x;
			d.push_front(x);
		}
		else if ("pop_front" == str) {
			cout << d.pop_front() << endl;
		}
		else if ("pop_back" == str) {
			cout << d.pop_back() << endl;
		}
		else if ("size" == str) {
			cout << d.size() << endl;
		}
		else if ("empty" == str) {
			cout << d.empty() << endl;
		}
		else if ("front" == str) {
			cout << d.front() << endl;
		}
		else {
			cout << d.back() << endl;
		}
	}

}

/*
https://www.acmicpc.net/status?user_id=itree1030&problem_id=10866&from_mine=1
*/