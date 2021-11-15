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

	Point arr[5]; // 객체 배열
	// 정적으로 배열 형태로 만들 수 있다.

	for (int i = 0; i < 5; i++) {
		cin >> arr[i].x;
		cin >> arr[i].y;
	}

	return 0;
}