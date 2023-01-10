#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string a, string b)
{
	if (a.length() == b.length()) {
		return a < b;
	}

	else {
		return a.length()<b.length();
	}
}
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int input;
	cin >> input;
	
	vector<string> s;
	for (int i = 0; i < input; i++) {
		string a;
		cin >> a;
		s.push_back(a);
	}

	sort(s.begin(), s.end(), compare);

	for (int i = 0; i < input; i++) {
		if (i+1<input && s[i] == s[i + 1]) {
			continue;
		}
		cout << s[i] << "\n";
	}

}