#include <iostream>
using namespace std;

class Stack {
	int stack[100000];
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
			stack[top] = 0;
			top--;
		}
	}
	
	void sum() {
		int sum = 0;
		for (int i = 0; i < top+1; i++) {
			sum += stack[i];
		}
		cout << sum << endl;
	}
};

int main() {
	Stack stack;
	int commend, inputnum;
	cin >> commend;

	for (int i = 0; i < commend; i++) {
		cin >> inputnum;
		if (inputnum != 0) {
			stack.push(inputnum);
		}
		else {
			stack.pop();
		}
	}
	stack.sum();
	

}
