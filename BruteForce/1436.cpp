#include <iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;

	int number = 1;//출력할 수
	string a;

	int count = 0;

	while (true) {

		a = to_string(number);

		if (a.find("666") != string::npos) {//a에 666이란 숫자가 들어갈경우 count를 늘린 다음 n과 비교, 같으면 number를 출력
			//npos는 찾는 문자가 없을경우 반환하는 쓰레기값
			//즉 쓰레기값이 아니라 값이 있을경우를 아래 조건문 실행
			//없을경우 else문
			count += 1;
			if (count == n) {
				cout << number << '\n';
				return 0;
			}
			else {
				number+=1;
				continue;
			}
		}
		else
			number+=1;

	}
}