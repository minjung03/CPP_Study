#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Student {

public:

	int nNo;
	char *szName; // ����� ���� �� �ִ� ���� �����ͷ� ��´�. 

public:

	Student() {

		nNo = 0;
		szName = 0;
		cout << "�Ű����� ���� ������" << endl;
	
	};

	Student(int no, const char* pname) {

		nNo = no;

		szName = new char[strlen(pname) + 1];

		strcpy(szName, pname); // �ڿ� �ִ°� ������ ���´�.
		cout << "�Ű����� 2���� ������" << endl;
	}

	void printStudent() {

		if (szName != nullptr) { // �������� ���� ������ if�� üũ
			cout << nNo << "," << szName << endl;
		}

	}

	~Student() {

		if (szName != nullptr) { // �ʱ�ȭ�� 0���� �߾����� ������ �̷��� �൵ �ȴ�.
			cout << szName <<" �Ҹ�" << endl; // st3�� ���� delete�� ���� �������Ѿ��Ѵ�.
			delete[] szName;
		}	
		else {
			cout << "�Ҹ�" << endl;
		}
	}
};

int main() {

	Student st1; // ���� : stact ������ �����. ���α׷��� ���� �� �����

	cout << sizeof(st1) << endl;

	st1.nNo = 1;

	st1.szName = new char[20]; // �޸𸮸� ����־�� �Ѵ�.
	strcpy(st1.szName, "���ϳ�");

	Student st2(2, "ȫ�浿");
	// Student st3("������");

	Student* st3 = new Student(); // ���� : ���� �޸𸮰� heap������ �����. �������� ���� ����

	st1.printStudent();
	st2.printStudent();
	st3->printStudent();

	delete st3; // new�� ¦���̴�. (���� �� �����־����)
	// �������� ���� �ֵ��� ���α׷��� ������ �˾Ƽ� ����������, �������� ���� �ֵ��� ���� �������� �־�� �Ѵ�.
	// malloc -> new , free -> delete �����̴�.

	return 0;
}