#include <iostream>
using namespace std;

//int sum(int, int);
//double sum(int, int); 
// �Ű� ������ ���� �޼ҵ�� �����ε��̶� �� ������.
// ���� ã�ư��� �� �� �𸣱� ������ ���� �߻�

void swapV(int a, int b) {
	int tmp;
	tmp = a; // tmp = 10
	a = b;  // a = 20
	b = tmp; // b = 10
};
void swapP(int* a, int* b) {
	int tmp;
	tmp = *a; // a�� ������ tmp�� �־��
	*a = *b;  // b�� ������ a�� �־��
	*b = tmp; // tmp�� ������ b�� �־��
};
void swapR(int& a, int& b) { // �갡 swap�ϱ� ���� ����(������ ���� ����)
	int tmp;
	tmp = a; 
	a = b; 
	b = tmp;
};

int main() {

	int a = 10;
	int b = 20;

	//swapV(a, b);
	//cout << a << "  " << b << endl;  // �ٲ� a, b ���� ������ ���ƿ´�

	//swapP(&a, &b); // �ּҰ��� �Ѱ��ش�.
	//cout << a << "  " << b << endl; // �ٲ� a, b ���� �״�� �����´� 

	swapR(a, b); // call by Value�� ����� ���� ����.
	cout << a << "  " << b << endl;  
	// �� swaP�� 20 10 ���� �� �ٲ� 10 20���� ���
}