#include <iostream>
using namespace std;

//�̿ϼ�. ���� �ٽ� Ǯ�̿���


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	//��� ���� ����, ������ ���� ���� ������ ����
	char BS_Board[8][8];
	char WS_Board[8][8];

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			BS_Board[2 * i][2 * j] = 'B';
			BS_Board[2 * i][2 * j + 1] = 'W';
			BS_Board[2 * i + 1][2 * j] = 'W';
			BS_Board[2 * i + 1][2 * j+1] = 'B';

			WS_Board[2 * i][2 * j] = 'W';
			WS_Board[2 * i][2 * j + 1] = 'B';
			WS_Board[2 * i + 1][2 * j] = 'B';
			WS_Board[2 * i + 1][2 * j + 1] = 'W';

		}
	}

	//�Է¹��� �迭
	char Board[51][51] = {};

	int a, b;
	cin >> a, b;

	
	for (int i = 0; i < a ; i++) {
		for (int j = 0; j < b ; j++) {
			cin >> Board[i][j];
		}
	}
}