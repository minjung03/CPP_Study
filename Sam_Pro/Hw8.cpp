#include <iostream>
using namespace std;

int main() {

	unsigned  a;
	unsigned  b;
	int sum = 0, cnt = 0;

	cout << "�� 2�� �Է�(���� �� ū ��) : ";
	cin >> a;
	cin >> b;

	cout << "���� ��� : "<< a << endl;
	cout << "�� �� : " << b << endl;
	cout << "0���� " << b << "������ �ִ� " << a << "�� ��� : ";
	
	for (int i = 0; i <= b; i++) {
		
		if (i % a == 0) {
			cout << i << "  ";
			cnt++;
			sum += i;
		}
		
	}
	cout << endl;
	cout << "0���� " << b << "������ �ִ� " << a << "�� ����� ���� : "<< cnt << "��" << endl;
	cout << "0���� " << b << "������ �ִ� " << a << "�� ����� �� : " << sum  << endl;
}