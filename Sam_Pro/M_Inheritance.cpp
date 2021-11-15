#include<iostream>
#include <string>
using namespace std;

class Horse {
public:
	Horse() { cout << "Horse 생성자" << endl; }
	virtual ~Horse() { cout << "Horse 소멸자" << endl; }
	virtual void speak() {
		cout << "히이잉--" << endl;
	}
};

class Bird {
public:
	Bird() { cout << "Bird 생성자" << endl; }
	virtual ~Bird() { cout << "Bird 소멸자" << endl; }
	void speak() {
		cout << "짹짹--" << endl;
	}
	void fly() {
		cout << "날다" << endl;
	}
};

class Pegasus : public Bird, public Horse { // 먼저 작성한 부모 클래스 생성자 부터 다녀간다!!
public:
	Pegasus() { cout << "Pegasus 생성자" << endl; }
	virtual ~Pegasus() { cout << "Pegasus 소멸자" << endl; }
	void speak() {
		cout << "페가수스 : 히이잉--" << endl;
	}
};

int main() {
	/*
	Pegasus peg;
	peg.speak();
	peg.fly();
	*/

	// 자식 것 사용하게 하기 : virtual (형변환 안해도 된다)

	Horse* obj1 = new Horse(); 
	obj1->speak();              // 히이잉--
	// obj1->fly();				// 불가능 -> Hores에 fly() 가 없으니.
	((Pegasus*)obj1)->fly();    // ?? 가능해졌다..
	delete obj1;

	cout << endl;
	

	Pegasus* obj2 = new Pegasus();
	obj2->speak();				// 페가수스 : 히이잉--
	obj2->fly();				// 가능 -> Bird의 fly()를 상속 받았으니
	delete obj2;

	cout << endl;


	Horse* obj3 = new Pegasus(); // 가능
	obj3->speak();				 // 1. 히이잉-- (타입이 Hores이므로)
								 // 2. virtual를 사용해서 이젠 '페가수스 : 히이잉--'이 출력된다
	((Pegasus*)obj3)->speak();   //  페가수스 : 히이잉-- -> Pegasus로 형변환
	// obj3->fly();				 // 불가능 -> 있기는 하지만 타입이 Hores이므로 사용 불가능
	((Pegasus*)obj3)->fly();     // 가능 -> Pegasus로 형변환
	delete obj3;

	cout << endl;


	// Pegasus* obj4 = new Horse(); // 불가능
	// 조금 만들어서 많이 쓰는거 불가능**

	return 0;
}
