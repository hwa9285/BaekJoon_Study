#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int listen, watch;
	int count = 0;
	cin >> listen >> watch;

	map<string, int> list;

	for (int i = 0; i < watch + listen; i++) {
		string a;
		cin >> a;
		list[a]++; // a라는 문자열을 키로 저장 후 그에 대응하는 값을 1을 더해줌
		//만약 a라는 이름이 한번 더 들어온다면 그 이름은 듣도보도 못한 이름이므로 값이 2가됨
		//2가 된 값들만 출력을 하면 됨.
		//이름은 자동으로 사전순으로 저장됨.
		if (list[a] == 2) {
			count += 1; //듣도보도 못한 이름의 수
		}
	}
	map<string, int>::iterator it;
	cout << count << "\n";

	for (it = list.begin(); it != list.end(); it++) {
		if (it->second == 2) {
			cout << it->first << "\n";
		}
	}
}