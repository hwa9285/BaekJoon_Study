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
		card.push(i);		//1~n까지 카드 삽입, pop을 수행하면 작은 수 먼저 나가게됨.

	}
	
	for (int i = 1; i < (2*n)-2; i++) {
		//카드가 n장이면 n-1번은 버리고 n-2번은 삽입을 수행하게됨.따라서 총 연산은 최소 2n-3번?
		if (i % 2 != 0) {//홀수번째 수행일때, 카드를 버림.
			card.pop();
		}
		else {
			int k = card.pop();
			card.push(k);
		}
	}

	card.Front();

}