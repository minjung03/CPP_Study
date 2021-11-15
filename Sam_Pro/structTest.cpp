#include <iostream>
using namespace std;

// 구조체 변수 선언 방법은 여러가지가 있다!
struct Point {
	int x;
	int y;
} p1; 

struct Point p3;  // 초기값은 0
Point p4;

int main() {

	Point point = { 1,2 };
	p1 = { 3,4 };
	cout << "점 point의 좌표는 (" << point.x << "," << point.y <<") 입니다." <<endl;
	cout << "점 point의 좌표는 (" << p1.x << "," << p1.y << ") 입니다." << endl;
	cout << "점 point의 좌표는 (" << p3.x << "," << p3.y << ") 입니다." << endl;
	cout << "점 point의 좌표는 (" << p4.x << "," << p4.y << ") 입니다." << endl;
}