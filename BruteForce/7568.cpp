#include <iostream>
using namespace std;

class Person{
	int kg;
	int cm;
	int rank;
public:
	Person() {
		rank = 1;
	};
	void setPerson(int n, int m) {
		cm = n;
		kg = m;
	}
	int setRank() {
		rank += 1;
		return rank;
	}
	int getRank() {
		return rank;
	}
	bool operator < (Person& p1) {
		if (cm < p1.cm && kg < p1.kg) {
			return true;
		}
		else
			return false;
	}

};


int main() {
	cin.tie(NULL);
	cout.tie(NULL);
	ios::sync_with_stdio(false);

	int input;
	cin >> input;

	Person* person=new Person[input];
	
	for (int i = 0; i < input; i++) {
		int cm, kg;
		cin >> cm >> kg;
		person[i].setPerson(cm, kg);
	}

	for (int i = 0; i < input; i++) {
		for (int j = 0; j < input; j++) {
			if (person[i] < person[j]) {
				person[i].setRank();
			}
			
		}
	}

	for (int i = 0; i < input; i++) {
		cout << person[i].getRank() << " ";
	}
}

