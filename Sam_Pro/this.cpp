#include<iostream>
using namespace std;

class Person {


	int age;

public:

	Person* GetThis() { // p1�� Ÿ�԰� ���ƾ��Ѵ�.
		return this; // �׶��׶��� this�� ����ϴ� ��ü�� �ٸ���.
		// this�� �׶��׶��� �ڽ��̴�.
	}
	int GetAge() {
		return this->age; // ��� �������� Ȯ���ϰ� �������ִ� �̷��Ե� ����Ѵ�.
	}
};
int main() {

	Person* p1 = new Person();
	cout << p1 << endl; // �Ʒ� ����� ���� �ּҸ� ������.
	cout << p1->GetThis() << endl; // p1�� this�� ����
	cout << p1->GetAge()<< endl;

	Person* p2 = new Person();
	cout << p2 << endl;  // �Ʒ� ����� ���� �ּҸ� ������.
	cout << p2->GetThis() << endl; // p1�� this�� ����
	cout << p2->GetAge() << endl;

}