#include<iostream>
using namespace std;

class Circle {
public :
	int radius;
	Circle();
	Circle(int r);
	~Circle();
};

Circle::Circle() {
	radius = 10;
	cout << "반지름 " << radius << " 원 생성 " << endl;
}
Circle::Circle(int r) {
	radius = r;
	cout << "반지름 " << radius << " 원 생성 " << endl;
}
Circle::~Circle() {

	cout << "반지름 " << radius << " 원 소멸 " << endl;
}

void main() {

	Circle c1;
	Circle c2(50);

	cout << sizeof(Circle) << endl; // 멤버변수가 4바이트이니 4바이트가 나온다.
}