#include<iostream>
using namespace std;

class Student {
private:
	int grade;
	int ban;

public:
	Student() {
		grade = 3;
		ban = 8;
		cout << "����"<< endl;
	}
	~Student() {
		cout << "�Ҹ�" << endl;
	}

	void setGrade(int grade) {
		this->grade = grade;
	}
	int getGrade() {
		return grade;
	}

};

int main() {

	unique_ptr<Student> pStudent(new Student); 


	cout << "�г� : " << pStudent->getGrade() << endl;
	pStudent->setGrade(2);
	cout << "�г� : " << pStudent->getGrade() << endl;

	return 0;
}