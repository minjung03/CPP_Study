#include<iostream>
using namespace std;

// 정보은닉(imformation hiding)

class Point {
private:
	int x;
	int y;

public : // 프로토타입
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
};

void Point:: setX(int x) { // 가장 단순한 방법은 이름을 바꾸는 것
	this->x = x;
	// 멤버변수 = 매개변수로 인식하는게 아님
	// 매개변수 = 매개변수로 인식(가까운 애들로 인식)
}

void Point::setY(int y) { // this 방법도 있다.
	(*this).y = y;
}

int Point::getX() {
	return x;
}

int Point::getY() {
	return y;
}

int main() {

	int x, y;
	Point p;

	cout << "좌표입력 : ";
	cin >> x >> y;

	p.setX(x);
	p.setY(y);

	cout << "점(" << p.getX() << "," << p.getY() << ") 그리기" << endl;

	return 0;
}