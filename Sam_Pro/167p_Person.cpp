#include<iostream>
#include <string>
using namespace std;

class Person {
public:
	void PrintMethod() {
		cout << "Person's Method()" << endl;
	}
};

class Student : public Person {
public:
	void PrintMethod() {
		Person::PrintMethod();
		cout << "Student's Method()" << endl;
	}
};

int main() {
	Student student;
	student.PrintMethod();

	return 0;
}