#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

//sort 세번쨰 인자에 대해서 좀 더 자세히 공부하기(compare)
bool compare(pair<int, string>a, pair<int, string>b) {
	return a.first < b.first;
}

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int input;
	cin >> input;

	vector<pair<int, string>> s(input);

	for (int i = 0; i < input; i++) {
		int age;
		string name;
		cin >> age >> name;
		s[i].first = age;
		s[i].second = name;
	}

	stable_sort(s.begin(), s.end(), compare);

	for (int i = 0; i < s.size(); i++) {
		cout << s[i].first << " " << s[i].second << "\n";
	}
}