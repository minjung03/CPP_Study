#include <iostream>
using namespace std;

//struct Point { // 구조체는 기본적으로 public 타입
//	int x;
//	int y;
//
//	void Print(); // 프로토타입 prototype
//	// 아래서 정의하는거 쉽게하는 법
//	// alt + enter 을 누르면 된다!
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
//	cout << "원 입니다." << endl;
//}
//void Point::Print() {
//	cout << "x의 좌표" << x << endl;
//	cout << "y의 좌표" << y << endl;
//}

class  Point { // 클래스는 기본적으로 private 타입

public : // 접근권한 : 안 적으면 기본 "private" 타입이기 때문에 접근할 수 없다.
	
	int x;
	int y;

	void Print(); 
};

int main() {

	Point point = { 1,2 };
	point.Print();
}


void Point::Print() {
	cout << "x의 좌표" << x << endl;
	cout << "y의 좌표" << y << endl;
}
