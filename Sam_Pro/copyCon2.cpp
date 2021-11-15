#include <iostream>
using namespace std;

class Point {
	int x, y;

public:
	Point(int _x, int _y) {
		x = _x;
		y = _y;
	}
	/* 디폴트 복사 생성자 (정의한 복사 생성자가 없으면 자동 생성)
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
	// 디폴트 복사 생성자의 복사 형태는 얕은 복사 (포인터들은 사용 거의 불가능)

	p1.ShowData();
	p2.ShowData();
}