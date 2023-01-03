#include <iostream>
#include<vector>
using namespace std;

int main() {
	int x, y, w, h;
	cin >> x >> y >> w >> h;

	int left, right, bottom, top;

	left = x;
	right = w - x;
	bottom = y;
	top = h - y;

	vector <int> v;
	v.push_back(left);
	v.push_back(right);
	v.push_back(bottom);
	v.push_back(top);

	int l = left;

	for (int i = 0; i < 4; i++) {
		if (v.at(i) < l) {
			l = v.at(i);
		}
		
	}
	cout << l;

}