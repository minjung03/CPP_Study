#include<iostream>
using namespace std;



void jungjuk() {

	static int a = 0;
	cout << "���� ���� a�� " << a << endl;
	a++;
}

int main() {

	jungjuk(); // a = 0
	jungjuk(); // a = 1
	jungjuk(); // a = 2

	//cout << a << endl; // ����, ���������� main()���� ��� �Ұ���


	const int b = 3; //����� ����(���� �ٲ��� �ʴ´�)
	// b = 5;   ���� �߻� b�� ����� ����
	
	return 0;

}