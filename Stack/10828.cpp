#include <iostream>
#include <string>
using namespace std;

class Stack {
	int stack[10000];
	int top;
public:
	Stack() {
		top = -1;
	}
	void push(int x) {
		top++;
		stack[top] = x;
		
	}
	void pop() {
		if (top == -1) {
			cout << -1 << endl;
		}
		else {
			cout << stack[top] << endl;
			top--;
		}
	}
	void size() {
		cout << top + 1 << endl;
	}
	void empty() {
		if (top == -1) {//비어있으면
			cout << 1 << endl;
		}
		else
			cout << 0 << endl;
	}
	void Top() {
		if (top == -1) {
			cout << -1 << endl;
		}
		else {
			cout << stack[top] << endl;
		}
	}
};

int main() {
	Stack stack;

	int N,x;
	cin >> N;

	string a;
	for (int i = 0; i < N; i++) {
		cin >> a;
		if (a.compare("push") == 0) {
			cin >> x;
			stack.push(x);
		}
		else if (a.compare("pop") == 0) {
			stack.pop();
		}
		else if (a.compare("size") == 0) {
			stack.size();
		}
		else if (a.compare("empty") == 0) {
			stack.empty();
		}
		else if (a.compare("top") == 0) {
			stack.Top();
		}

	}
}