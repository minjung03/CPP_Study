#include <iostream>
using namespace std;

//struct Point { // ����ü�� �⺻������ public Ÿ��
//	int x;
//	int y;
//
//	void Print(); // ������Ÿ�� prototype
//	// �Ʒ��� �����ϴ°� �����ϴ� ��
//	// alt + enter �� ������ �ȴ�!
//};
//struct Circle {
//	void Print();
//};
//
//int main() {
//
//	Point point = { 1,2 };
//	point.Print();
//
//	Circle c;
//	c.Print();
//}
//
//
//void Circle::Print() {
//	cout << "�� �Դϴ�." << endl;
//}
//void Point::Print() {
//	cout << "x�� ��ǥ" << x << endl;
//	cout << "y�� ��ǥ" << y << endl;
//}

class  Point { // Ŭ������ �⺻������ private Ÿ��

public : // ���ٱ��� : �� ������ �⺻ "private" Ÿ���̱� ������ ������ �� ����.
	
	int x;
	int y;

	void Print(); 
};

int main() {

	Point point = { 1,2 };
	point.Print();
}


void Point::Print() {
	cout << "x�� ��ǥ" << x << endl;
	cout << "y�� ��ǥ" << y << endl;
}
