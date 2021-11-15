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

	Parent* ptr = new Child; // 가능
	// Child* ptr = new Parent; // 불가능

	delete ptr;

}