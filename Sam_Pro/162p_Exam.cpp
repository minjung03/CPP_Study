#include<iostream>
#include <string>
using namespace std;

class Person {
	string name;

protected:
	string addr;
};

class Student : Person {
public :
	/*
	void setNamer(string name) {
		this->setNamer = name;
		// this->setNamer - 오류. private타입이니 자식/외부에서 명시 불가능
	}
	*/
	void setAddr(string addr) {
		this->addr = addr;
	}
	string getAddr() {
		return addr;
	}
};

int main() {
	Student student1;
	student1.setAddr("서울시 관악구 호암로 546번지");
	cout << student1.getAddr() << endl;

	return 0;
}