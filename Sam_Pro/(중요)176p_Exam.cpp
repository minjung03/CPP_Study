#include<iostream>
using namespace std;

class Person {
public:
	string name;
	int hakbun;

	Person(string na, int hak) {
		name = na;
		hakbun = hak;
	}
	virtual ~Person() {
		cout << name << " Person �Ҹ�" << endl;
	}
	virtual void Printshow() {
		cout << "�̸� : " << name << endl;
		cout << "��ȣ : " << hakbun << endl;
	}
	void PTest() {
		cout << "PTest" << endl;
	}
};

class Student : public Person {

public:
	string university;

    Student(string na, int hak, string university) : Person(na, hak){
		this->university = university;
	}
	virtual ~Student() {
		cout << name << " Student �Ҹ�" << endl;
	}
	virtual void Printshow() { //�������̵�
		Person::Printshow();
		cout << "�б� : " << university << endl;
	}
	void STest() {
		cout << "STest" << endl;
	}
};

class Employee : public Person{
public:
	string company;
	int groes;

	Employee(string company, int groes, string na, int hak) : Person(na, hak){
		this->company = company;
		this->groes = groes;
	}
	virtual ~Employee() {
		cout << name << " Employee �Ҹ�" << endl;
	}
	virtual void Printshow() {
		Person::Printshow();
		cout << "ȸ�� : " << company << endl;
		cout << "���� : " << groes << endl;
	}
};

int main() {

	Student st1("ȫ�浿", 2018, "�ѱ����б�"); //st1, st3 �� �� ���α׷��� ���� �ڿ� �Ҹ��� �ȴ�.
	st1.Printshow();

	cout << "------------------------------" << endl;

	Student* st2 = new Student("ȫ���", 2021, "�̸�"); // ���� �Ҹ�
	st2->Printshow();
	delete st2;

	cout << "------------------------------" << endl;

	Person st3("�����", 2019); //st1, st3 �� �� ���α׷��� ���� �ڿ� �Ҹ��� �ȴ�.
	st3.Printshow();

	cout << "------------------------------" << endl;

	// ���� ���� �������** ���� ���ϱ�

	// ����ϴ°� � Ÿ������ ������İ� �߿�**
	// �������̵� �� ���� �ڽ� ���� ���**
	Person* st4 = new Student("���", 2020, "���̽���"); // �����ʹ� Person, �����Ͱ� �� Ÿ��. // Person �� ���
	// �θ� ������ = �ڽ� // �ڽ� Ÿ���� �θ� Ÿ������ �� ��ȯ - �Ųٷδ� ������**
	st4->Printshow();
	st4->PTest();
	// st4->STest(); - STest()��� �Ұ���. Ÿ���� Person�̴�. �θ� �ʿ� ���� ���� ��� �Ұ��� 
	// ������ �� ������, ������� �־ �� ��ȯ �� ��� �����ϴ�.**
	((Student*)st4)->STest(); // �ڽ� Ÿ������ �� ��ȯ �� ��밡��. ** () �� �ι� ���� **
	delete st4;

	cout << "------------------------------" << endl;

	Person* st5 = new Employee("īī��",1000,"���", 2000);
	st5->Printshow();
	delete st5;

	cout << "------------------------------" << endl;

	// **virtual�� ����ؾ� �������� �����ϴ�**

}