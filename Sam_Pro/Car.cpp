#include<iostream>
using namespace std;


class Car {

	int ton, price;

protected:  

	static int count; // ���� ��� ����

public:

	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton = ton; this->price = price; count++;
	}
	static int GetCount() { //���� ��� �Լ�
		return count;
	}
	~Car() {
		cout << count << " �Ҹ�"<<  endl;
		count--;
	}
};

//static int Car::count = 0; // ����**** ����!! static�� Ŭ���� �ȿ��� ������ ���� ���!!!
int Car::count = 0;

int main() {

	// cout << "������ �ڵ����� �� : " << Car::count << endl; // ������ ��ü�� �ҷ��� ��������, ��ü�� ���� ���¿����� Ŭ���� �̸�:: ���� �ҷ��� �Ѵ�.
																// ��ü�� ������ ���ķδ� � ��ü�� ����ص� ����� ����. ����� �κ��̴�.

	Car car1;
	//cout << "������ �ڵ����� �� : " << car1.GetCount() << endl; 
	cout << "������ �ڵ����� �� : " << car1.count << endl; // protected �� ��� ���迡���� ���� ������ ���� �������̴� ����!

	Car car2(10,3000);
	cout << "������ �ڵ����� �� : " << car2.GetCount() << endl;

	return 0;
}