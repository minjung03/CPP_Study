#include<iostream>
#include <string>
using namespace std;

class Person {

protected :  
	string name;
	int age;

public :

	Person (){
		cout << "�ƺ�" << endl;
	}
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;

	}
	void ShowPerson() {
		cout << name << "�� ���̴� " << age << "�Դϴ�" << endl;
	}
};

class Student : public Person {

private : 

	int id;

public : 

	Student(int id, const string& name, int age) : Person(name, age) 
	{
		// : Person(name, age)�� ���ٸ� �θ� Ŭ������ �⺻ �����ڸ� ȣ���Ѵ�. ���ٸ� ����
		//: Person(name, age) <- �ڹ��� super() �� ���� ** �θ������ ȣ�� ��, �̸����� �ۼ�
		this->id = id;
	}
	void ShowPerson() {
		cout << name << "�� ���̴� " << age << "�Դϴ�" << endl; 
		// name, age -> private �̶� �θ� �� ����. �׷��� �θ� Ŭ�������� protected�� Ÿ���� ��������� ��
		cout << id << "�Դϴ�" << endl;
	}
};

int main() {

	Student student(1234, "ȫ�浿", 34);
	student.ShowPerson();
}