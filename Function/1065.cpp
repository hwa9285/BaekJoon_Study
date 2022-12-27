#include <iostream>
using namespace std;

void Hansu(int n) {
	int count = 0;
	int hun, ten, one;

	for (int i = 1; i < n + 1; i++) {
		hun = i / 100;
		ten = (i % 100) / 10;
		one = (i % 10) / 1;

		if (hun <= 0) {
			count += 1;
		}
		else {
			if ((hun - ten) == (ten - one)) {
				count++;
			}
		}
	}
	cout << count << "\n";
}


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int n;
	cin >> n;
	
	Hansu(n);
}