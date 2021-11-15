#include<iostream>
using namespace std;

class Ride { // 순수 가상 클래스
public:
	virtual void ridefunc() = 0; // 순수 가상 함수
};

class BusRide : public Ride { // 순수 가상 클래스(순수 가상 함수를 상속 받음)
public:
	int age;
	/* virtual 을 써서 자식을 부르게 했다. 근데 자식에 오버라이딩 하는 것을 까먹었다. 
	   이건 논리적인 오류. 프로그램에서 오류를 잡지는 않음
	   void ridefunc() {
	   cout << "버스를 타다" << endl;
	}*/
};

class AirRide : public Ride {
public:
	int ton;
	void ridefunc() {
		cout << "비행기를 타다" << endl;
	}
};
int main() {

	Ride *r1 = new BusRide();
	// BusRide는 순수 가상 클래스를 상속받아 순수 가상 함수를 재정의하지 않았다. 그래서 BusRide도 순수 가상 클래스가 되었고, 순수 가상 클래스는 객체 생성이 불가하여 에러가 난다.
	r1->ridefunc();
	// r1.age = 10; // Ride에는 age가 없다

	AirRide ar2;
	Ride &r2 = ar2; // 부모->virtual 가상 함수->자식 것 수행
	r2.ridefunc();

	return 0;
}