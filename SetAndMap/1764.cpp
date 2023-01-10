#include <iostream>
#include <map>
#include <algorithm>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int listen, watch;
	int count = 0;
	cin >> listen >> watch;

	map<string, int> list;

	for (int i = 0; i < watch + listen; i++) {
		string a;
		cin >> a;
		list[a]++; // a��� ���ڿ��� Ű�� ���� �� �׿� �����ϴ� ���� 1�� ������
		//���� a��� �̸��� �ѹ� �� ���´ٸ� �� �̸��� �赵���� ���� �̸��̹Ƿ� ���� 2����
		//2�� �� ���鸸 ����� �ϸ� ��.
		//�̸��� �ڵ����� ���������� �����.
		if (list[a] == 2) {
			count += 1; //�赵���� ���� �̸��� ��
		}
	}
	map<string, int>::iterator it;
	cout << count << "\n";

	for (it = list.begin(); it != list.end(); it++) {
		if (it->second == 2) {
			cout << it->first << "\n";
		}
	}
}