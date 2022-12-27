#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	string s;
	cin >> s;

	int count = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'c') {
			if (s[i + 1] == '=' || s[i + 1] == '-') {
				continue;
			}
			else
				count += 1;
		}
		else if (s[i] == 'd') {
			if (s[i + 1] == 'z' && s[i + 2] == '=') {
				continue;
			}
			else if (s[i + 1] == '-')
			{
				continue;
			}
			else
				count++;
		}
		else if (s[i] == 'l' || s[i] == 'n') {
			if (s[i + 1] == 'j') {
				continue;
			}
			else
				count++;
		}
		else if (s[i] == 's' || s[i] == 'z') {
			if (s[i + 1] == '=') {
				continue;
			}
			else
				count++;
		}
		else
			count++;
	}

	cout << count << "\n";
}