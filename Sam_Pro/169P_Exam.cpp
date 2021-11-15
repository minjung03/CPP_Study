#include<iostream>
#include <string>
using namespace std;

class Parent {
public :
	Parent() { cout << " Parent" << endl; };
	virtual ~Parent() { cout << "~Parent" << endl; };
};

class Child : public Parent {
public:
	Child() { cout << " Child" << endl; };
	~Child() { cout << "~Child" << endl; };
};

void main() {

	// Child* ptr = new Child;

	Parent* ptr = new Child; // ����
	// Child* ptr = new Parent; // �Ұ���

	delete ptr;

}