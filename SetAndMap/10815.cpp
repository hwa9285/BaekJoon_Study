#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int input;
	cin >> input;

	vector<int> v1;

	for (int i = 0; i < input; i++) {
		int n;
		cin >> n;
		v1.push_back(n);
	}

	sort(v1.begin(), v1.end());

	int card;
	cin >> card;

	vector<int> card_num;

	for (int i = 0; i < card; i++) {
		int m;
		cin >> m;
		card_num.push_back(m);
	}

	for (int i = 0; i < card; i++) {
		int left = 0;
		int right = v1.size() - 1;
		bool val = false;

		while (left <= right) {

			int mid = (left + right) / 2;

			if (v1[mid] == card_num[i]) {
				cout << "1" ;
				val = true;
				break;
			}
			
			if (v1[mid] < card_num[i]) {
				left = mid + 1;
			}
			else if (v1[mid] > card_num[i])
				right = mid - 1;
		}
		if (val == false) {
			cout << "0";
		}

		if (i == card - 1)
			return 0;
		else
			cout << " ";

	}
}