#include <iostream>
using namespace std;

int square_sum(int& num) { // a �������� num�̶�� �θ� �� �ִ�(����)
	num = num * num;
	return num + num;
}
int main() {

	int a = 3;
	cout << square_sum(a) << endl;
	cout << "a�� ���� �ٲ���ٸ� 9�� ��µ˴ϴ�." << a << endl;


	return 0;
}