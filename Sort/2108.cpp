#include <iostream>
#include <vector>
using namespace std;

int sorted[1000000];

void merge(vector<int>& v, int first, int mid, int last) {
	int i, j, k;
	i = first;
	j = mid + 1;
	k = 0;

	while (i <= mid && j <= last) {
		if (v[i] <= v[j]) {
			sorted[k++] = v[i++];
		}
		else
			sorted[k++] = v[j++];
	}
	if (i > mid)
		while (j <= last)
			sorted[k++] = v[j++];
	else
		while (i <= mid)
			sorted[k++] = v[i++];

	for (i = first, k = 0; i <= last; i++, k++)
		v[i] = sorted[k];

}

void mergeSort(vector<int>& v, int first, int last)
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		mergeSort(v, first, mid);
		mergeSort(v, mid + 1, last);
		merge(v, first, mid, last);
	}
}
int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int input;
	cin >> input;
	vector<int> v;
	int count1[4001] = { 0 };
	int count2[4001] = { 0 };
	for (int i = 0; i < input; i++) {
		int n;
		cin >> n;
		v.push_back(n);
		if (n > 0) {
			count1[n] += 1;
		}
		else
			count2[abs(n)] += 1;
	}

	mergeSort(v, 0, input - 1);

	//평균 구하기
	int sum = 0;
	for (int i = 0; i < v.size(); i++) {
		sum += v[i];
	}

	int avg =round(sum / input);

	//중앙값 구하기
	int mid_value = v[input / 2];

	//최빈값 구하기
	int most_value;
	int p_k=0;
	int n_k=0;
	int c1;
	int c2;
	for (int i = 0; i < 4000; i++ ) {
		if (p_k < count1[i]) {
			p_k = i+1;
		}
		if (n_k < count2[i]) {
			n_k = -(i + 1);
		}
	}


	//범위구하기
	int scope = (v.back() - v.front());

	cout << avg << "\n";
	cout << mid_value << "\n";
	cout << scope << "\n";
}