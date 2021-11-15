#include <iostream>
using namespace std;

// 구조체 변수 선언 방법은 여러가지가 있다!
struct Point {
	int x;
	int y;

	// 멤버 함수(java에서의 메소드 개념)
	void Print() {
		cout << "x의 좌표" << x << endl;
		cout << "y의 좌표" << y << endl;
	}
};
int main() {

	Point point = { 1,2 };
	
	point.Print();  // 멤버 함수 호출

	// 포인터를 사용했을 때
	// Ppoint->Print();
	// (*Ppoint).Print();

}