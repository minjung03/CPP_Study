#include<iostream>
using namespace std;

// ��������(imformation hiding)

class Point {
private:
	int x;
	int y;

public : // ������Ÿ��
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
};

void Point:: setX(int x) { // ���� �ܼ��� ����� �̸��� �ٲٴ� ��
	this->x = x;
	// ������� = �Ű������� �ν��ϴ°� �ƴ�
	// �Ű����� = �Ű������� �ν�(����� �ֵ�� �ν�)
}

void Point::setY(int y) { // this ����� �ִ�.
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

	cout << "��ǥ�Է� : ";
	cin >> x >> y;

	p.setX(x);
	p.setY(y);

	cout << "��(" << p.getX() << "," << p.getY() << ") �׸���" << endl;

	return 0;
}