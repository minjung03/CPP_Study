#include<iostream>
#include<algorithm>
#include<vector> // include ��!!!
#include <string>
using namespace std;

vector<int> Lotto(int range, int select) {
	
	srand(time(NULL));

	vector<int> v;

	for (int i = 1; i <= range; i++) {
		v.push_back(i);
	}

	// algorithm�� �ִ� �޼ҵ�� **
	random_shuffle(v.begin(), v.end()); // �Ű� ���� ���̸�ŭ �������� ����

	v.resize(select);  // ������ �ٽ� �����ϱ�

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