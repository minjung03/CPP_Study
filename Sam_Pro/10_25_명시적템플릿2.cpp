#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
	return a + b;
}

int main() {

	cout << add(3,5) << endl;

	// �� �� �κп� ���ؼ��� ����� ���ø����� ������Ѵ�!
	cout << add('a', 'b') << endl;
	//cout << add("school", "Mirim") << endl;

	return 0;
}