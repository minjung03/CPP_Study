#include<iostream>
#include <string>
using namespace std;

class Horse {
public:
	Horse() { cout << "Horse ������" << endl; }
	virtual ~Horse() { cout << "Horse �Ҹ���" << endl; }
	virtual void speak() {
		cout << "������--" << endl;
	}
};

class Bird {
public:
	Bird() { cout << "Bird ������" << endl; }
	virtual ~Bird() { cout << "Bird �Ҹ���" << endl; }
	void speak() {
		cout << "±±--" << endl;
	}
	void fly() {
		cout << "����" << endl;
	}
};

class Pegasus : public Bird, public Horse { // ���� �ۼ��� �θ� Ŭ���� ������ ���� �ٳణ��!!
public:
	Pegasus() { cout << "Pegasus ������" << endl; }
	virtual ~Pegasus() { cout << "Pegasus �Ҹ���" << endl; }
	void speak() {
		cout << "�䰡���� : ������--" << endl;
	}
};

int main() {
	/*
	Pegasus peg;
	peg.speak();
	peg.fly();
	*/

	// �ڽ� �� ����ϰ� �ϱ� : virtual (����ȯ ���ص� �ȴ�)

	Horse* obj1 = new Horse(); 
	obj1->speak();              // ������--
	// obj1->fly();				// �Ұ��� -> Hores�� fly() �� ������.
	((Pegasus*)obj1)->fly();    // ?? ����������..
	delete obj1;

	cout << endl;
	

	Pegasus* obj2 = new Pegasus();
	obj2->speak();				// �䰡���� : ������--
	obj2->fly();				// ���� -> Bird�� fly()�� ��� �޾�����
	delete obj2;

	cout << endl;


	Horse* obj3 = new Pegasus(); // ����
	obj3->speak();				 // 1. ������-- (Ÿ���� Hores�̹Ƿ�)
								 // 2. virtual�� ����ؼ� ���� '�䰡���� : ������--'�� ��µȴ�
	((Pegasus*)obj3)->speak();   //  �䰡���� : ������-- -> Pegasus�� ����ȯ
	// obj3->fly();				 // �Ұ��� -> �ֱ�� ������ Ÿ���� Hores�̹Ƿ� ��� �Ұ���
	((Pegasus*)obj3)->fly();     // ���� -> Pegasus�� ����ȯ
	delete obj3;

	cout << endl;


	// Pegasus* obj4 = new Horse(); // �Ұ���
	// ���� ���� ���� ���°� �Ұ���**

	return 0;
}
