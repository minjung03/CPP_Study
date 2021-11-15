#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
using namespace std;

class Person {

	char* name;
	int age;

public:

	Person(const char* myname, int myage) {
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}
	// ���� ������
	Person(Person &rhs) :age(rhs.age) { 
		name = new char[strlen(rhs.name) + 1];
		strcpy(this->name, rhs.name);
		//this->age = rhs.age; �� ����� �Ȱ���

	}

	void ShowPerson() const {
		cout << "�̸� : " << name << " ";
		cout << "���� : " << age << endl;
	}

	~Person() {
		delete[] name;
		cout << "called destructor!" << endl;
	}

};

int main(void) {

	Person man1("Lee Mee Rim", 27);
	Person man2(man1);
	man1.ShowPerson();
	man2.ShowPerson();
	
	return 0;
}

