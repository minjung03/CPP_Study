#include<iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() {
		cout << "Ÿ��" << endl;
	}
	virtual void Number() { } // �Ź� ����ȯ �� �� ������ ��¥�� ��������, �ڽ� ���� �����ϰ� virtual �ٿ���.
};

class BusRide : public Ride {
public:
	int age;
	void rideFunc() {
		cout << "������ Ÿ��" << endl;
	}
	void Number() {
		cout << "152" << endl;
	}
};

class AirRide : public Ride {
public:
	int ton;
	void rideFunc() {
		cout << "����⸦ Ÿ��" << endl;
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