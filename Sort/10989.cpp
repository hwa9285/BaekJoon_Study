#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int input;
	cin >> input;

	int arr[10001] = {0};

	for (int i = 0; i < input; i++) {
		int n;
		cin >> n;
		arr[n] += 1;
	}

	for (int i = 0; i < 10001; i++) {
		if (arr[i] != 0) {
			for (int j = 0; j < arr[i]; j++)
				cout << i << "\n";
		}
	}
}
