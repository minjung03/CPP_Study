#include <iostream>
using namespace std;

// ����ü ���� ���� ����� ���������� �ִ�!
struct Point {
	int x;
	int y;

	// ��� �Լ�(java������ �޼ҵ� ����)
	void Print() {
		cout << "x�� ��ǥ" << x << endl;
		cout << "y�� ��ǥ" << y << endl;
	}
};
int main() {

	Point point = { 1,2 };
	
	point.Print();  // ��� �Լ� ȣ��

	// �����͸� ������� ��
	// Ppoint->Print();
	// (*Ppoint).Print();

}