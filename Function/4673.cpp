#include <iostream>
using namespace std;

void d() {
	int num[10001];
	
	int sum;
	int ten_tho, tho, hun, ten, one;

	for (int i = 1; i <= 10000; i++) {
		sum = 0;
		ten_tho = i / 10000;
		tho = i / 1000;
		hun = (i%1000) / 100;
		ten = (i%100) / 10;
		one = (i%10) / 1;

		sum =i + ten_tho + tho + hun + ten + one; //i는 sum의 생성자가 됨. 
		//sum은 셀프넘버가 아닌 숫자
		//이 숫자를 제외한 나머지를 배열에 넣어야함.

		if (sum < 10001) {
			num[sum] = 1;
		}
	}

	for (int i = 1; i < 10001; i++) {
		if (num[i] != 1) {
			cout << i << "\n";
		}
	}
}

int main() {
	d();
}