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
		// this->setNamer - ����. privateŸ���̴� �ڽ�/�ܺο��� ��� �Ұ���
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
	student1.setAddr("����� ���Ǳ� ȣ�Ϸ� 546����");
	cout << student1.getAddr() << endl;

	return 0;
}