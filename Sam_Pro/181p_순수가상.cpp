#include<iostream>
using namespace std;

class Ride {
public:
	virtual void rideFunc() { } 
	void rideFunc2() {
		cout << "����" << endl;
	}
};

class BusRide : public Ride {
public:
	int age;

	// �ƺ��� rideFunc�� ���� �Լ� { } �̸� ����X, ���� �����̸� ����O
	//void rideFunc() {
	//	cout << "������ Ÿ��" << endl;
	//}
};

int main() {

	Ride* r1 = new BusRide();
	r1->rideFunc();
	// r1->age = 100; // ���� - �Լ��� ���� �� �θ𿡰� ���� ���� ��� �Ұ���

	BusRide* r2 = new BusRide();
	r2->rideFunc2();

	return 0;
}