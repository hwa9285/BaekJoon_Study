#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int input=5;
	vector<int> v;
	int sum = 0;

	for (int i = 0; i < input; i++) {
		int n;
		cin >> n;
		v.push_back(n);
		sum += n;
	}
	//��հ��
	int avg = sum / 5;

	int temp;

	//�������� �˰����� �̿��Ͽ� ����
	for (int i = 0; i < v.size() - 1; i++) {//������ ���ڴ� �ڵ����� ���ĵǹǷ� -1�� ����.
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] > v[j]) {
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	cout << avg << "\n";
	cout << v[2] << "\n";
}