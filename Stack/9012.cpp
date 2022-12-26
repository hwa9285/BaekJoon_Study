#include <iostream>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int inputnum;
	cin >> inputnum;

	for (int i = 0; i < inputnum; i++) {
		string input;
		cin >> input;

		int left = 0;
		int right = 0;
		int length = 0;
		bool count = false;



		for (int j = 0; j < input.size(); j++) {

			if (input[j] == '(') {
				left += 1;
				
			}
			else if (input[j] == ')') {
				right += 1;
				
				if (left < right) {
					cout << "NO" << "\n";
					count = true;
					break;
				}
			}
		}
		if (!count) {
			if (left == right) {
				if (input[0] != '(' && input[input.size()] != ')') {
					cout << "NO" << "\n";
				}
				else {
					cout << "YES" << "\n";
				}
			}
			else
				cout << "NO" << "\n";
		}
	}
}