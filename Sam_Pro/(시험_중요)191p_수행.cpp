#include<iostream>
using namespace std;

// �� ���α׷����� ���蹮�� ����!!!

class Shape {
private:
	int x, y;
public:

	static int count;

	Shape(int x, int y) : x(x), y(y) {
		cout << count++ << "��° ���� ����" << endl;
	} 
	virtual void drawCalc() {
		cout << "��ǥ (" << x << "," << y << ")�̰�, ";
	}
	int getX() {
		return x;
	}
	int getY() {
		return y;
	}
};
int Shape::count = 0; // static ���� ������ �ܺο��� �ʱ�ȭ!!


class Rectangle : public Shape{ // ��� �� ex) : ���� ������   �θ�Ŭ���� �̸�
private:
	int x, y, width, height;
public:

	Rectangle(int x, int y, int width, int height) : Shape(x, y), width(width), height(height){ }

	virtual void drawCalc() {
		Shape::drawCalc(); // �θ� Ŭ���� �޼��带 �θ� �� ex) �θ� Ŭ����::�޼ҵ� �̸�();
		cout << "width:" << width << ", height:"<<height << "�� �簢���� ���� " << width * height << endl;
	}
};

class Triangle :public Shape{
private:
	int x, y, width, height;
public:

	Triangle(int x, int y, int width, int height) : Shape(x, y), width(width), height(height) { }

	virtual void drawCalc() {
		Shape::drawCalc();
		cout << "width:" << width << ", height:" << height<< "�� �ﰢ���� ���� " << (width * height)/2 << endl;
	}
};

class Circle :public Shape {
private:
	int x, y;
	double radius;
	
public:

	const static double PI; // �� �κе� �����ϱ�!! static �� public ������ ����!!

	Circle(int x, int y, double radius) : Shape(x, y), radius(radius) { }
	virtual void drawCalc() {
		Shape::drawCalc();
		cout << "������ " << radius << "�� ���� ���� " << radius * radius * PI << endl;
	}

};
const double Circle::PI = 3.14; // �ۿ����� static �Ⱦ���, ���� �� ���� ������!!
// ����� 100% ����!!

int main() {

	Shape* ps1 = new Rectangle(1, 2, 34, 56);
	ps1->drawCalc(); // ������ �̴� ȭ��ǥ(->)���� ����**

	Shape* ps2 = new Triangle(3, 4, 34, 56);
	ps2->drawCalc();

	Shape* ps3 = new Circle(5, 6, 8);
	ps3->drawCalc();

	// Shape* ps4 = new Circle;
	// �θ�� ���� ������� ���� �⺻ �����ڰ� �ֳĿ� ���� () ���� �Ⱦ��� �޶����� ��?
	// �׷��� �׳� �����~~

	// ������& ���� .���� ����!

	return 0;
}