#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;

	map<string, int> list;

	int count = 0;
	for (int i = 0; i < n; i++) {
		string a;
		cin >> a;
		list[a]++;
	}

	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;

		if (list[s] != 0) {//이미 있는 값일경우 count++ 
			count++;
		}
	}
	cout << count;
}