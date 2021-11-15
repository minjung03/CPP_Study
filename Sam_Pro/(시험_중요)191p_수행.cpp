#include<iostream>
using namespace std;

// 이 프로그램에도 시험문제 많음!!!

class Shape {
private:
	int x, y;
public:

	static int count;

	Shape(int x, int y) : x(x), y(y) {
		cout << count++ << "번째 도형 생성" << endl;
	} 
	virtual void drawCalc() {
		cout << "좌표 (" << x << "," << y << ")이고, ";
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};
int Shape::count = 0; // static 정적 변수는 외부에서 초기화!!


class Rectangle : public Shape{ // 상속 시 ex) : 접근 제한자   부모클래스 이름
private:
	int x, y, width, height;
public:

	Rectangle(int x, int y, int width, int height) : Shape(x, y), width(width), height(height){ }

	virtual void drawCalc() {
		Shape::drawCalc(); // 부모 클래스 메서드를 부를 때 ex) 부모 클래스::메소드 이름();
		cout << "width:" << width << ", height:"<<height << "인 사각형의 면적 " << width * height << endl;
	}
};

class Triangle :public Shape{
private:
	int x, y, width, height;
public:

	Triangle(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) { }

	virtual void drawCalc() {
		Shape::drawCalc();
		cout << "width:" << width << ", height:" << height<< "인 삼각형의 면적 " << (width * height)/2 << endl;
	}
};

class Circle :public Shape {
private:
	int x, y;
	double radius;
	
public:

	const static double PI; // 이 부분들 유의하기!! static 는 public 영역에 선언!!

	Circle(int x, int y, double radius) : Shape(x, y), radius(radius) { }
	virtual void drawCalc() {
		Shape::drawCalc();
		cout << "반지름 " << radius << "인 원의 면적 " << radius * radius * PI << endl;
	}

};
const double Circle::PI = 3.14; // 밖에서는 static 안쓴다, 변수 앞 영역 연산자!!
// 여기는 100% 시험!!

int main() {

	Shape* ps1 = new Rectangle(1, 2, 34, 56);
	ps1->drawCalc(); // 포인터 이니 화살표(->)으로 접근**

	Shape* ps2 = new Triangle(3, 4, 34, 56);
	ps2->drawCalc();

	Shape* ps3 = new Circle(5, 6, 8);
	ps3->drawCalc();

	// Shape* ps4 = new Circle;
	// 부모와 현재 만드려는 곳에 기본 생성자가 있냐에 따라 () 쓰고 안쓰고가 달라지는 듯?
	// 그래도 그냥 써두자~~

	// 참조자& 쓰면 .으로 접근!

	return 0;
}