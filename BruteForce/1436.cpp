#include <iostream>
#include<string>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);
	
	int n;
	cin >> n;

	int number = 1;//����� ��
	string a;

	int count = 0;

	while (true) {

		a = to_string(number);

		if (a.find("666") != string::npos) {//a�� 666�̶� ���ڰ� ����� count�� �ø� ���� n�� ��, ������ number�� ���
			//npos�� ã�� ���ڰ� ������� ��ȯ�ϴ� �����Ⱚ
			//�� �����Ⱚ�� �ƴ϶� ���� ������츦 �Ʒ� ���ǹ� ����
			//������� else��
			count += 1;
			if (count == n) {
				cout << number << '\n';
				return 0;
			}
			else {
				number+=1;
				continue;
			}
		}
		else
			number+=1;

	}
}