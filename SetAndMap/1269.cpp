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

	map<int, int> list;

	for (int i = 0; i < n + m; i++) {
		int a;
		cin >> a;

		if (list[a] != 0) {
			list.erase(a);
		}
		else
			list[a]++;

	}
	cout << list.size();
}