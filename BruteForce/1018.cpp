#include <iostream>
using namespace std;

//미완성. 내일 다시 풀이예정


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	//흰색 시작 보드, 검정색 시작 보드 모범답안 선언
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

	//입력받은 배열
	char Board[51][51] = {};

	int a, b;
	cin >> a, b;

	
	for (int i = 0; i < a ; i++) {
		for (int j = 0; j < b ; j++) {
			cin >> Board[i][j];
		}
	}
}