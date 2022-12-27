#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	stack<char> s;
	string str;

	while (true) {
		getline(cin, str);
		bool count = true;
		while (!s.empty()) {
			s.pop();
		}
		
		if (str[0] == '.')
			break;
		
		for (int i = 0; i < str.size();i++) {
			if (str[i] == '(' || str[i] == '[' || str[i] == ')' || str[i] == ']') {
				if (str[i] == '(' || str[i] == '[') {
					s.push(str[i]);
				}
				else if (s.empty() && (str[i] == ')' || str[i] == ']')) {
					cout << "no" << "\n";
					count = false;
					break;
				}
				else if ((str[i] == ')'&& s.top()=='(') || (str[i] == ']' && s.top() == '[')) {
					s.pop();
				}
				else if ((str[i] == ')' && s.top() == '[') || (str[i] == ']' && s.top() == '(')) {
					cout << "no" << "\n";
					count = false;
					break;
				}
			}
		}
		if (s.empty() && count == true) {
			cout << "yes" << "\n";
		}
		else if (!s.empty() && count == true) {
			cout << "no" << "\n";
		}
	}
}