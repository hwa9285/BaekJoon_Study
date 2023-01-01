#include <iostream>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	//검정색 시작 보드 모범답안 선언, 흰색 시작은 바꾸는 값을 64에서 빼주면 되므로 필요X
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

	//배열 입력
	for (int i = 0; i < N; i++) {//세로
		for (int j = 0; j < M; j++) {//가로
			cin >> Board[j][i]; //들어오는 입력 순서가 가로먼저 다 입력한다음 그 아랫줄이므로 배열 표현은 [j][i]
		}
	}


	int min = 64;//결과값

	for (int i = 0; i < M - 7; i++) {//가로
		for (int j = 0; j < N - 7; j++) {//높이
			//원본과의 비교가 끝나면 change는 초기화해줘야함.
			int change = 0;

			for (int k = 0; k < 8; k++) {//모범 보드판과 비교, 가로줄 먼저 다 비교 후, 그 아래줄 비교
				for (int l = 0; l < 8; l++) {
					if (BS_Board[l][k] != Board[i + l][j + k]) {
						change += 1;
					}
				}
			}

			if (change > 32)//W시작이 더 유리할경우 반전시켜줌
				change = 64 - change;

			if (change < min) {//change가 min보다 작을경우 최솟값 갱신
				min = change;
			}

		}
	}

	cout << min << "\n";
}