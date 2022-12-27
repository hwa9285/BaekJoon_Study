#include <iostream>
using namespace std;

class Queue {
	int front;
	int back;
	int size;
	int* queue;
public:
	Queue(int size = 2000000) {
		this->size = size;
		queue = new int[size];
		front = 0;
		back = 0;
	}
	void push(int x) {
		queue[back++] = x;
	}
	int pop() {
		if ((back - front) == 0) {
			return -1;
		}
		else {
			return queue[front++];
		}
	}
	int Size() {
		return back - front;
	}

	void Front() {
		if ((back - front) == 0) {
			cout << -1 << "\n";
		}
		else
			cout << queue[front] << "\n";
	}

};

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	Queue card;

	int n;
	cin >> n;

	for (int i = 1; i < n + 1; i++) {
		card.push(i);		//1~n���� ī�� ����, pop�� �����ϸ� ���� �� ���� �����Ե�.

	}
	
	for (int i = 1; i < (2*n)-2; i++) {
		//ī�尡 n���̸� n-1���� ������ n-2���� ������ �����ϰԵ�.���� �� ������ �ּ� 2n-3��?
		if (i % 2 != 0) {//Ȧ����° �����϶�, ī�带 ����.
			card.pop();
		}
		else {
			int k = card.pop();
			card.push(k);
		}
	}

	card.Front();

}