#include<iostream>
using namespace std;

//Student Ŭ���� ����
class Student {
private:
	int nHakbun;
	const char* sName;

public:
	Student(); 
	Student(int nHakbun, const char* sName);
	void show();  
};


//Student Ŭ���� ��� �Լ��� ����
Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;

}
Student::Student(int nHakbun, const char* _sName) {
	this->nHakbun = nHakbun; 
	sName = _sName;  
	cout << "�Ű������� �й��� ��ϵǾ����ϴ�." << endl;

}
void Student::show() {
	cout << "�й��� " << nHakbun << endl;
	cout << "�̸��� " << sName << endl;

}


int main() {

	Student stu[3] = {
		Student(), // �����ڸ� �θ� ���� () �״�� �ۼ�..
		Student(1111,"������"),
		Student(2222,"������") // ; �� ����**
	};

	for (int i = 0; i < 3; i++) {
		stu[i].show();
	}

	return 0;
}