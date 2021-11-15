#include<iostream>
using namespace std;

int add(int x, int y) {
	return x + y;
}
int odd(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}

int main(){

	int x, y, op;
	cin >> x;
	cin >> y;

	cout << "1. add 2. odd 3. mul" << endl;
	cin >> op;

	// ���� ���ε� (���� ������ ���� ������ �ȴ�)
	/*
	int result;
	switch (op) {
		case 1: result = add(x, y); break;
		case 2: result = odd(x, y); break;
		case 3: result = mul(x, y); break;
	}

	cout << result << endl;
	*/


	// ���� ���ε� (���� ���������� ���� ���� �� �����ȴ�)
	int (*func_ptr)(int, int) = nullptr; // �Լ� ������
	switch (op) {
		case 1: func_ptr = add; break;
		case 2: func_ptr = odd; break;
		case 3: func_ptr = mul; break;
	}

	cout << func_ptr(x,y) << endl; // �Լ� ȣ��, ���� �� ����
}
