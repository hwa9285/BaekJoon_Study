#include <iostream>
#include <vector>
using namespace std;

int d(int n) {
	int sum = n;
	while (n != 0) {
		sum += n % 10;
		n = n / 10;
	}

	return sum;
}


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int sum,min;
	int number;

	cin >> number;

	min = 0;

	for (int i = 1; i < number; i++) {
		sum = d(i); 
		
		//d(i)�� ������� i�� ������.
		//i�� �����ڸ� �ϳ��� �� ���س����ٰ� �Է��� number�� ���ڿ� ���������� number�� �����ڸ� �� �� ����.
		//1���� �÷������⶧���� ù ���� ���� ���� �����ڰ� ��.
		
		if (sum == number) {
			min = i;
			cout << min << "\n";
			return 0;
		}
	}

	cout << min << "\n";
}