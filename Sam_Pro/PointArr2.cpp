#include<iostream>
using namespace std;

class Point {

public:

	int x, y;

public:

	Point() {
		cout << "기본 생성자" << endl;
	};
	~Point() {
		cout << "(" << x << "," << y << ")" << "객체 소멸" << endl;
	}

}; // 꼭 세미콜론 붙이기**

int main() {

	Point *arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = new Point(); 
	}
	for (int i = 0; i < 5; i++) {

		cin >> arr[i]->x; // 포인터이니 .이 아닌 ->로 접근 (또는 (*arr[i])->x )
		cin >> arr[i]->y; // 죽이고 싶을 때 죽일 수 있으니 많이 사용한다. (특히 게임 시)
	}
	for (int i = 0; i < 5; i++) {
		delete arr[i]; // 소멸자와 달리 순서대로 죽음
	}

	return 0;
}