#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n, m,card;
	cin >> n >> m;

	vector<int> v;
	
	for (int i = 0; i < n; i++) {
		cin >> card;
		v.push_back(card);
	}

	int answer = 0;
	int r = abs(m - v.at(0) + v.at(1) + v.at(2));

	for (int i = 0; i < n - 2; i++) {
		for (int j = 1+i; j < n - 1; j++) {
			for (int k = 1 + j; k < n; k++){
				int l = v.at(i) + v.at(j) + v.at(k);

				if (abs(m - l) <= r && l <= m) {
					r = abs(m-l);
					answer = l;
				}
			}
		}
	}

	cout << answer << "\n";
}