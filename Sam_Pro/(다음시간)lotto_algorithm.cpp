#include<iostream>
#include<algorithm>
#include<vector> // include 꼭!!!
#include <string>
using namespace std;

vector<int> Lotto(int range, int select) {
	
	srand(time(NULL));

	vector<int> v;

	for (int i = 1; i <= range; i++) {
		v.push_back(i);
	}

	// algorithm에 있는 메소드들 **
	random_shuffle(v.begin(), v.end()); // 매개 변수 범이만큼 랜덤으로 섞기

	v.resize(select);  // 사이즈 다시 조정하기

	return v;
}

int main() {

	vector<int> lotto;

	lotto = Lotto(46, 10);

	for (int i = 0; i < 10; i++) {
		cout << lotto[i] << "   ";
	}

	return 0;
}