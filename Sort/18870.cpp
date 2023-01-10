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

	//중복값을 unique를 이용해 벡터의 제일 뒷부분으로 보내버림
	//그 후 삭제
	//unique는 쓰레기값의 첫번째 위치를 반환해줌.
	v_change.erase(unique(v_change.begin(), v_change.end()), v_change.end());

	//중복값을 제거하였으니 해당 수보다 작은 값의 개수를 카운트하고 출력

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