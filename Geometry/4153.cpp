#include <iostream>
#include<math.h>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	while (1) {
		int x, y, z;
		cin >> x >> y >> z;

		if (x == 0 && y == 0 && z == 0) {
			return 0;
		}
		else {
			if (x > y && x > z) {
				if (pow(x, 2) == pow(y, 2) + pow(z, 2)) {
					cout << "right" << "\n";
				}
				else
					cout << "wrong" << "\n";
			}
			else if (y > x && y > z) {
				if (pow(y, 2) == pow(x, 2) + pow(z, 2)) {
					cout << "right" << "\n";
				}
				else
					cout << "wrong" << "\n";
			}
			else if (z > x && z > y) {
				if (pow(z, 2) == pow(x, 2) + pow(y, 2)) {
					cout << "right" << "\n";
				}
				else
					cout << "wrong" << "\n";
			}
			else
				cout << "wrong" << "\n";
		}
	}
}