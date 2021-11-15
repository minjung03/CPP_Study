#include <iostream>
using namespace std;

class Point {
	int x, y;

public:
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}
	/* ����Ʈ ���� ������ (������ ���� �����ڰ� ������ �ڵ� ����)
	Point(const Point& p) {
		x = p.x;
		y = p.y;
	}
	*/
	void ShowData() {
		cout << x << " " << y << endl;
	}
};

int main(void) {

	Point p1(10, 20);
	Point p2(p1); 
	// ����Ʈ ���� �������� ���� ���´� ���� ���� (�����͵��� ��� ���� �Ұ���)

	p1.ShowData();
	p2.ShowData();
}