#include<iostream>
using namespace std;

int sum(int, int);

int main() {

	cout << sum(2, 3) << endl;
}
int sum(int a, int b) {
	int sum;
	sum = a + b;
	return sum, a, b; // ����� �������� ���� ������ ���� ��µȴ�.
	// �ᱹ ������ ��!
}