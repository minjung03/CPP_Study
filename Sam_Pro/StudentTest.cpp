#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Student {

public:

	int nNo;
	char szName[20]; // �ѱ� 9�ڸ� ����(�ڿ� null)

public:

	Student() {

		nNo = 0;
		szName[0] = 0;
		cout << "�Ű����� ���� ������" << endl;

	};

	Student(int no, const char *pname) {

		nNo = no;
		strcpy(szName, pname); // �ڿ� �ִ°� ������ ���´�.
		cout << "�Ű����� 2���� ������" << endl;
	}

	void printStudent() {

		cout << nNo << "," << szName << endl;
	}

	~Student() {
		cout << szName << " �Ҹ�" << endl; // st3�� ���� delete�� ���� �������Ѿ��Ѵ�.
	}
};

int main() {

	Student st1; // ���� : stact ������ �����. ���α׷��� ���� �� �����

	// cout << sizeof(st1) << endl; // int+char 20�� = 24����Ʈ

	st1.nNo = 1;
	strcpy(st1.szName, "���ϳ�");

	Student st2(2, "ȫ�浿");

	// Student st3("������");

	Student* st3 = new Student(3,"�����"); // ���� : ���� �޸𸮰� heap������ �����. �������� ���� ����


	st1.printStudent();
	st2.printStudent();
	st3->printStudent();

	delete st3; // new�� ¦���̴�. (���� �� �����־����)
	// �������� ���� �ֵ��� ���α׷��� ������ �˾Ƽ� ����������, �������� ���� �ֵ��� ���� �������� �־�� �Ѵ�.
	// malloc -> new , free -> delete �����̴�.

	return 0;
}