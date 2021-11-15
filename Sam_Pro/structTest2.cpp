#include <iostream>
using namespace std;

// 구조체 변수 선언 방법은 여러가지가 있다!
struct Point {
	int x;
	int y;
};
int main() {

	Point point = { 1,2 };
	Point* Ppoint = &point;
	cout << "점 point의 좌표는 (" << (*Ppoint).x << "," << (*Ppoint).y << ") 입니다." << endl;
	// Ppoint를 따라간 곳의 x값, Ppoint를 따라간 곳의 y값

	cout << "점 point의 좌표는 (" << Ppoint->x << "," << Ppoint->y << ") 입니다." << endl;
}