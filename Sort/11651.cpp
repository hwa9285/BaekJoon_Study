#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//sort 말고 인덱스로 계산하는방법 다시 구현하기

bool compare(pair<int, int>a, pair<int, int>b)
{
	if (a.second == b.second) {
		return a.first < b.first;
	}

	else {
		return a.second < b.second;
	}
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int input;
	cin >> input;

	vector<pair<int,int>> vec(input);

	for (int i = 0; i < input; i++) {
		int input_x, input_y;
		cin >> input_x >> input_y;
		vec[i].first = input_x;
		vec[i].second = input_y;
	}

	sort(vec.begin(), vec.end(), compare);

    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i].first << " " << vec[i].second << "\n";
    }
}
