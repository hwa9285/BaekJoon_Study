#include <iostream>
#include <vector>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string a;
	cin >> a;

	map<string, int> list;

	int len = a.size();
	int i = 0;
	while (i < len) {
		for (int j = 1; j <= len-i; j++) {//���ڿ��� ���� 1~��ü����(-������ ��ġ)
			if (list[a.substr(i, j)] == 0) {
				list[a.substr(i, j)]++;
			}
			
		}
		i++;
	}
	
	cout << list.size();
}