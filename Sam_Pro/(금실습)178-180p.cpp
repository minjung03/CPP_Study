#include<iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() {
		cout << "타다" << endl;
	}
	virtual void Number() { } // 매번 형변환 할 수 없으니 가짜로 만들어놓고, 자식 것을 수행하게 virtual 붙였다.
};

class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "버스를 타다" << endl;
	}
	void Number() {
		cout << "152" << endl;
	}
};

class AirRide : public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "비행기를 타다" << endl;
	}
};

int main() {

	Ride* r1 = new BusRide();
	r1->rideFunc();
	//r1->age = 100;
	r1->Number();
	delete r1;

	Ride* r2 = new AirRide();
	r2->rideFunc();
	delete r2;

	Ride* r3 = new Ride();
	r3->rideFunc();
	delete r3;

	return 0;
}