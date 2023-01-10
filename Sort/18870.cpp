#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int input;
	cin >> input;

	vector<int> v_init;
	vector<int> v_change;
	for (int i = 0; i < input; i++) {
		int n;
		cin >> n;
		v_init.push_back(n);
		v_change.push_back(n);
	}

	sort(v_change.begin(), v_change.end());

	vector<int>::iterator it;

	//�ߺ����� unique�� �̿��� ������ ���� �޺κ����� ��������
	//�� �� ����
	//unique�� �����Ⱚ�� ù��° ��ġ�� ��ȯ����.
	v_change.erase(unique(v_change.begin(), v_change.end()), v_change.end());

	//�ߺ����� �����Ͽ����� �ش� ������ ���� ���� ������ ī��Ʈ�ϰ� ���

	for (int i = 0; i < v_init.size(); i++) {
		int left = 0;
		int right = v_change.size() - 1;
		bool val = false;
		while (left <= right) {
			int mid = (left + right) / 2;
			if (v_change[mid] == v_init[i]) {
				int count = -1;
				val = true;
				for (int t = 0; t <= mid; t++) {
					count += 1;
				}
				cout << count;
				break;
			}

			if (v_change[mid] < v_init[i]) {
				left = mid + 1;
			}
			else if (v_change[mid] > v_init[i]) {
				right = mid - 1;
			}

		}
		if (val == false) {
			cout << "0";
		}

		if (i == v_init.size() - 1) {
			return 0;
		}
		else
			cout << " ";
	}

}