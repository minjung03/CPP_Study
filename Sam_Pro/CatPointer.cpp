#include<iostream>
using namespace std;

class Cat {

private :
	// ��� ������ �������� �Ҵ��Ѵ�.
	int* pAge = new int;
	const char* pName =  new char;

public:

	Cat() {
		*pAge = 18;
		pName = "�߿���"; // *pName �ϴ°� �ƴ�!!
	}

	~Cat() {
		// cat�� delete�ϱ� ����, �������� ���� ��� ������ �޸� ���� �����ֱ�
		// delete �����ڸ� ����� ��� ������ �޸𸮸� �����Ѵ�.
		delete pAge;
		delete pName;
	}

	int getAge() {
		return *pAge;
	}
	void setAge(int age) {
		*pAge = age;
	}

	char* getName() {
		return (char*)pName;
	}
	void setName(const char* name) {
		pName = name;
	}

};

int main() {


	Cat* cat = new Cat;
	cout << "������� ���� : " << cat->getAge() << ", ������� �̸� : " << cat->getName() << endl;

	cat->setAge(20);
	cat->setName("�����");

	cout << "������� ���� : " << cat->getAge() << ", ������� �̸� : " << cat->getName() << endl;

};