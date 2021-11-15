#include<iostream>
using namespace std;

class Ride { // ���� ���� Ŭ����
public:
	virtual void ridefunc() = 0; // ���� ���� �Լ�
};

class BusRide : public Ride { // ���� ���� Ŭ����(���� ���� �Լ��� ��� ����)
public:
	int age;
	/* virtual �� �Ἥ �ڽ��� �θ��� �ߴ�. �ٵ� �ڽĿ� �������̵� �ϴ� ���� ��Ծ���. 
	   �̰� ������ ����. ���α׷����� ������ ������ ����
	   void ridefunc() {
	   cout << "������ Ÿ��" << endl;
	}*/
};

class AirRide : public Ride {
public:
	int ton;
	void ridefunc() {
		cout << "����⸦ Ÿ��" << endl;
	}
};
int main() {

	Ride *r1 = new BusRide();
	// BusRide�� ���� ���� Ŭ������ ��ӹ޾� ���� ���� �Լ��� ���������� �ʾҴ�. �׷��� BusRide�� ���� ���� Ŭ������ �Ǿ���, ���� ���� Ŭ������ ��ü ������ �Ұ��Ͽ� ������ ����.
	r1->ridefunc();
	// r1.age = 10; // Ride���� age�� ����

	AirRide ar2;
	Ride &r2 = ar2; // �θ�->virtual ���� �Լ�->�ڽ� �� ����
	r2.ridefunc();

	return 0;
}