#include <iostream>
#include <deque>

using namespace std;

// 일단 노드를 raw 포인터로 만들고, 완성되면 smart ptr로 바꾸기



class NODE {
public:
	NODE(int x) : value{x} 
	{
		next = nullptr;
	}
	
	int value;	// 8byte
	NODE* next;	// 8byte
};

// 스마트포인터로 만들다가 잠시 멈춘거

//class STACK {
//public:
//	STACK()
//	{
//		head = new NODE -1;
//		tail = make_shared<NODE>(-1);
//
//		head.get()->next.reset(tail.get());
//
//	}
//
//	void push(int x)
//	{
//		auto a = make_shared<NODE>(x);
//		auto prev_top = head.get()->next.get();
//
//		a.get()->next.reset(prev_top);
//		
//		head.get()->next.reset(a.get());
//			
//	}
//
//	int pop()
//	{
//		/*if (head.get()->next != tail) {
//			int res = head.get()->next.get()->value;
//			auto new_next = head.get()->next.get()->next.get();
//			
//			head.get()->next.reset(new_next);
//
//			
//			return res;
//			
//		}
//		return -1;*/
//	}
//
//private:
//
//	NODE* head;
//	NODE* tail;
//	
//
//};

class STACK {
public:
	STACK()	: mSize{0}
	{
		head = new NODE(-1);
		tail = new NODE(-1);

		head->next = tail;

	}

	void push(int x)
	{
		auto a = new NODE(x);
		auto prev_top = head->next;
		
		a->next = prev_top;
		head->next = a;			
		++mSize;
	}

	int pop()
	{
		if (head->next != tail) {
			int res = head->next->value;
			NODE* before = head->next;
			NODE* new_next = before->next;
			delete before;
			head->next = new_next;
			--mSize;
			return res;
		}
		return -1;
	}

	int size()
	{
		return mSize;
	}

	bool empty()
	{
		return head->next == tail;
	}

	int top ()
	{
		return head->next->value;
	}

private:
	int mSize;
	NODE* head;
	NODE* tail;
};

int main()
{
	STACK s;
	
	int N;
	cin >> N;

	string str;
	int x;
	while (cin >> str) {
		if (str == "push") {
			cin >> x;
			s.push(x);
		}
		else if (str == "pop") {
			cout << s.pop() << endl;
		}
		else if (str == "size") {
			cout << s.size() << endl;
		}
		else if (str == "empty") {
			cout << s.empty() << endl;
		}
		else {
			cout << s.top() << endl;
		}
	}

}

/*
https://www.acmicpc.net/status?user_id=itree1030&problem_id=10828&from_mine=1
*/