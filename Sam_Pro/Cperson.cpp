#include<iostream>
using namespace std;

class CPerson {

private :
	string name;
	int age;

public:
	CPerson() {

	}
	CPerson(string name, int age) {

		this->name = name;
		this->age = age;
		cout << name << " ����" << endl;
	}
	void Print() {
		cout << name << "�� " << age << "�� �Դϴ�." << endl;
	}
	~CPerson() {
		cout << name  << " �Ҹ�";
	}
}; 

int main() {

	CPerson cp("ȫ�浿", 33);
	cp.Print();
}