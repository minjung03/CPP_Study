#include<iostream>
using namespace std;

class Person {

// �⺻ private
	const char* name;
	const char* phone;
	int age;

public:
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
	// �����ڰ� ������ �⺻ �����ڰ� ���������.
	Person(const char* name, const char* phone, int age); // ������(����Ÿ��X)
	
	// �� ���� �Լ��� ���� �ۼ��ϰԵǸ� �ڵ����� inline�Լ��� �ȴ�.(ª���� �������� �� �� ������Ÿ���ְ� �ۿ��� ���븸���)
	void ShowData();
	//void SetData(const char* name, const char* phone, int age);

	//~Person() { cout << "��ü�� �Ҹ��մϴ�" << endl; };
	~Person();

};
/*
void Person::SetData(const char* name, const char* phone, int age) { // �����͸� �ѹ��� �ִ� �޼ҵ�
	
	// �������/�޼ҵ� �տ��� this�� �ٴ´�.
	// ��������� �Ű����� �̸��� ���� ��� �̸��� �ٸ��� �ְų�, this ���.
	this->name = name;
	this->phone = phone;
	this->age = age;
}
*/
Person::~Person() {
	cout << "��ü�� �Ҹ��մϴ�" << endl;
}
Person::Person(const char* name, const char* phone, int age) { // ������(����Ÿ��X)
	this->name = name;
	this->phone = phone;
	this->age = age;
}
void Person::ShowData() {

	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}

int main() {

	// Person p = { "KIM" , "013-113-1113", 22 };  // �Ű������� private�̶� ����(�̴ϼ� ���������� �����ϴ�)
	
	// Person p;
	// p.SetData("KIM", "013-113-1113", 22); 
	
	Person p("KIM", "013-113-1113", 22);  // �� �� ����� ���� ���

	// Person p1; // �⺻�����ڰ� �����Ƿ� ����

	p.ShowData();

	return 0;
}