#include<iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() { } 
	void rideFunc2() {
		cout << "날다" << endl;
	}
};

class BusRide : public Ride {
public:
	int age;

	// 아빠쪽 rideFunc가 가상 함수 { } 이면 오류X, 순수 가상이면 오류O
	//void rideFunc() {
	//	cout << "버스를 타다" << endl;
	//}
};

int main() {

	Ride* r1 = new BusRide();
	r1->rideFunc();
	// r1->age = 100; // 오류 - 함수나 변수 등 부모에게 없는 것은 사용 불가능

	BusRide* r2 = new BusRide();
	r2->rideFunc2();

	return 0;
}