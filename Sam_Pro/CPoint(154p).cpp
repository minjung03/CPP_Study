#include<iostream>
#include<cstring>
using namespace std;

class CPoint {
private:
	int x;
	int y;

public:

	CPoint(int x, int y) {
		this->x = x;
		this->y = y;
	}

	CPoint(const CPoint& p) {
		x = p.x;
		y = p.y;
	}

	int getX()
	{
		return x;
	}

	int getY()
	{
		return y;
	}


};

class Rect{

public:

	CPoint p1;
	CPoint p2;

	Rect(CPoint p1, CPoint p2) : p1(p1), p2(p2){
		/*
		// 여기서 기본 생성자가 없다 에러나면 위 문장처럼 : 써주기..!!
		this->p1 = p1;
		this->p2 = p2;
		*/
	}
	
	void Aria() {
		cout <<  abs((p1.getX() - p2.getX()) * (p1.getY() - p2.getY())) << endl;
	}

};


int main() {

	CPoint point1(10, 20);
	CPoint point2(20, 15);

	cout << point1.getX() << endl;
	cout << point2.getX() << endl;

	Rect r(point1, point2);

	r.Aria();

	return 0;

}