#include <iostream>
#include <map>
#include <ostream>
#include<vector>
using namespace std;

class Person{
public:
	string lastname;
	string firstname;

	// ģ�� Ŭ���� (������ �� ���̵� ����� �� �ִ�.)
	friend class PersonLessTham;

	Person(const string& lastname, const string& firstname) {
		this->lastname = lastname;
		this->firstname = firstname;
	}
};

// ** Object�� �� �� ���� �̷��� ����� ���� ����Ѵ�.
// string ���� ���� �ڱⰡ �˾Ƽ� false/true ��ȯ�� ������,
// Object �� �׷��� ������ ���� �� �������� �������ִ� ��
class PersonLessTham {
public:

	bool operator() (const Person& p1, const Person& p2) const {
		// ������ �ְ� �ڵ带 �ۼ�����
		if (p1.firstname < p2.firstname) {
			return true;
		}
		else if (p1.firstname == p2.firstname) {
			return p1.lastname < p2.lastname;
		}
		else {
			return false;
		}
	}

};

int main(){

	map<Person, bool, PersonLessTham> m;

	Person p1("���","��");
	Person p2("��ȭ", "��");
	Person p3("�浿", "ȫ");
	Person p4("���ҹ�", "��");

	m[p1] = true;
	m[p2] = true;
	m[p3] = true;
	m[p4] = true;

	for (map<Person, bool>::iterator ii = m.begin(); ii != m.end(); ++ii) {
		cout << ((*ii).first).firstname << " " << ((*ii).first).lastname << endl;
	}

}