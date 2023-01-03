#include <iostream>
#include <vector>
using namespace std;

int sorted[1000000];

void merge(vector<int>& v, int first, int mid, int last) {
	int i, j, k;
	i = first;
	j = mid+1;
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

void mergeSort(vector<int> &v, int first, int last)
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

	for (int i = 0; i < input; i++) {
		int n;
		cin >> n;
		v.push_back(n);
	}

	mergeSort(v, 0, input - 1);


	for (int i = 0; i < input; i++) {
		cout << v[i] << "\n";
	}

}