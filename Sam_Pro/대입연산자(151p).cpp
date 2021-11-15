#include<iostream>
#include<cstring>
using namespace std;

class Student {

private:  
	char* name;
	int age;

public :

	Student() {
		name = 0;
		age = 0;
	}

	Student(const char* name, int age) : age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
		cout << this->name << endl;
	}

	void showInfo() {
		cout << "�̸� : " << name << endl;
		cout << "���� : " << name << endl;
	}

	Student& operator=(Student& ref) {

		cout << this->name << endl;
		delete[] name;

		name = new char[20];
		strcpy_s(this->name, 20, ref.name);
		cout << this->name << endl;

		age = ref.age;
		return *this;
		// 65�� ó�� ������ ���޾� �Ͼ ��츦 ����� this�� ��ȯ!** �� ����ϱ�**

	}

	~Student() {

		if (name != NULL) { // ������ ���� ����
			cout << this->name << endl;
			delete[] name;

			cout << "~Student �Ҹ��� ȣ�� !" << endl;
		}
	}
};

int main() {

	Student st1("�̸���", 27);
	Student st2("���̽�����", 10);

	st2 = st1;
	
	st1.showInfo();
	st2.showInfo();

	Student st3;
	st3 = st1 = st2;

	Student st4;
	st4 = st1;

	return 0;
}