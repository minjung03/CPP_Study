#include<iostream>
using namespace std;

//Student Ŭ���� ����
class Student {
private:
	int nHakbun;
	const char* sName;

public:
	Student();  // ������ ������Ÿ��
	Student(int nHakbun, const char* sName); // ������ �����ε�
	void show();  // �Լ� ������Ÿ��
};


//Student Ŭ���� ��� �Լ��� ����
Student::Student() {
	nHakbun = 1234;
	sName = "�̻��";
	cout << "�й��� ��ϵǾ����ϴ�." << endl;

}
Student::Student(int nHakbun, const char* _sName) {
	this->nHakbun = nHakbun; // ���� �̸��� ������ �Ű������� �Ű����� ���� �ִ� ���̴�.
	sName = _sName;  // this�� ��������� ǥ���ϰų�, �Ű����� �̸��� �ٸ��� �ְų�..
	// �� -> �� �ֳ�? ��� �Ű������� �տ� Student * this �� �������ִ� ��.
	// ex) �Ű����� Student * this int nHakbun �� ��
	cout << "�Ű������� �й��� ��ϵǾ����ϴ�." << endl;

}
void Student::show(){
	cout << "�й��� " << nHakbun << endl;
	cout << "�̸��� " << sName << endl;

}


int main() {

	Student student1;  //Ŭ���� ���� ����/��ü ����(������ ȣ��)
	// �Ű����� ���� �����ڸ� ����� ���� ()�� �Ⱦ���. ���迡 ���� 100% Ʋ��!!
	student1.show();

	Student student2(5678,"��̸�");
	student2.show();

	return 0;
}