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
		
		//d(i)의 결과값은 i의 생성자.
		//i의 생성자를 하나씩 다 구해나가다가 입력한 number의 숫자와 동일해지면 number의 생성자를 알 수 있음.
		//1부터 늘려나갔기때문에 첫 값이 가장 작은 생성자가 됨.
		
		if (sum == number) {
			min = i;
			cout << min << "\n";
			return 0;
		}
	}

	cout << min << "\n";
}