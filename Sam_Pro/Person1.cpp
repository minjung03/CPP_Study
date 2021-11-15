#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#define SIZE 15

class Person {

	char name[SIZE];
	char phone[SIZE];
	int age;

public :
	void ShowData();

	Person(const char name[SIZE], const char phone[SIZE], int age) {
		strcpy(this->name, name);
		strcpy(this->phone, phone);
		this->age = age;
	}

};

void Person::ShowData() {
	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}

int main() {
	Person p = {"kim", "013-113-1113", 22 };

	p.ShowData();
	return 0;
}