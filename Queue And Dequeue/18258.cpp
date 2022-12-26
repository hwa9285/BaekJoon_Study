#include <iostream>
using namespace std;

class Queue {
	int front;
	int back;
	int size;
	int* queue;
public:
	Queue(int size=2000000) { 
		this->size = size;
		queue = new int[size];
		front = 0; 
		back = 0;  
	}
	void push(int x) {
		queue[back++] = x;
	}
	void pop() {
		if ((back - front) == 0) {
			cout << -1 << "\n";
		}
		else {
			cout << queue[front++] << "\n";
		}
	}
	void Size() {
		cout << back - front << "\n";
	}
	void empty() {
		if ((back-front) == 0) {
			cout << 1 << "\n";
		}
		else
			cout << 0 << "\n";
	}
	void Front() {
		if ((back - front) == 0) {
			cout << -1 << "\n";
		}
		else
			cout << queue[front] << "\n";
	}
	void Back() {
		if ((back - front) == 0) {
			cout << -1 << "\n";
		}
		else
			cout << queue[back-1] << "\n";
	}

};

int main() {
	cin.tie(nullptr);
	ios::sync_with_stdio(false);

	int inputnum, x;
	cin >> inputnum;
	string com;
	Queue queue;

	for (int i = 0; i < inputnum; i++) {
		cin >> com;
		if (com == "push") {
			cin >> x;
			queue.push(x);
		}
		else if (com == "pop") {
			queue.pop();
		}
		else if (com == "size") {
			queue.Size();
		}
		else if (com == "empty") {
			queue.empty();
		}
		else if (com == "front") {
			queue.Front();
		}
		else if (com == "back") {
			queue.Back();
		}
	}
}