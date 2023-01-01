#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	//������ ���� ���� ������ ����, ��� ������ �ٲٴ� ���� 64���� ���ָ� �ǹǷ� �ʿ�X
	char BS_Board[8][8];

	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if ((i % 2 == 0 && j % 2 == 0) || (i % 2 == 1 && j % 2 == 1)) {
				BS_Board[j][i] = 'B';
			}
			else
				BS_Board[j][i] = 'W';
		}
	}

	char Board[51][51] = {};

	int N, M;
	cin >> N >> M;

	//�迭 �Է�
	for (int i = 0; i < N; i++) {//����
		for (int j = 0; j < M; j++) {//����
			cin >> Board[j][i]; //������ �Է� ������ ���θ��� �� �Է��Ѵ��� �� �Ʒ����̹Ƿ� �迭 ǥ���� [j][i]
		}
	}


	int min = 64;//�����

	for (int i = 0; i < M - 7; i++) {//����
		for (int j = 0; j < N - 7; j++) {//����
			//�������� �񱳰� ������ change�� �ʱ�ȭ�������.
			int change = 0;

			for (int k = 0; k < 8; k++) {//��� �����ǰ� ��, ������ ���� �� �� ��, �� �Ʒ��� ��
				for (int l = 0; l < 8; l++) {
					if (BS_Board[l][k] != Board[i + l][j + k]) {
						change += 1;
					}
				}
			}

			if (change > 32)//W������ �� �����Ұ�� ����������
				change = 64 - change;

			if (change < min) {//change�� min���� ������� �ּڰ� ����
				min = change;
			}

		}
	}

	cout << min << "\n";
}