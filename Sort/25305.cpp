#include <iostream>
#include <vector>
using namespace std;

int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int input,cut;
	cin >> input >> cut;

	vector<int> v;

	for (int i = 0; i < input; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}
	int temp;

	//선택정렬 알고리즘을 이용하여 정렬
	for (int i = 0; i < v.size() - 1; i++) {//마지막 숫자는 자동으로 정렬되므로 -1을 해줌.
		for (int j = i + 1; j < v.size(); j++) {
			if (v[i] > v[j]) {
				temp = v[i];
				v[i] = v[j];
				v[j] = temp;
			}
		}
	}
	cout << v[input-(cut)] << "\n";
	//상을 받는 인원수는 cut
	//오름차순으로 정렬했기때문에 전체인원-cut인 인덱스가 커트라인점수
}