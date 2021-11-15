#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


// ������� �������**
class Student {

public:

	int nNo;
	char *szName; //char szName[20]; // �̷� ���̸� ���� ����Ƶ� ok �ٷ� �� ����
	// �̷� ���̸� ���� ����ش��� strcpy ����ؼ� �� ����!

	Student() {
		nNo = 0;
		szName = 0;
		cout << "�Ű����� ���� ����" << endl;
	}
		// �ٽ��ѹ� ����!
	Student(Student &a) : nNo(a.nNo){  //���� ������? (�� ����)

		// : nNo(a.nNo) == this->nNo = a.nNo; �� ������ ����

		szName = new char[strlen(a.szName) + 1]; // + 1�� null ��
		strcpy(szName, a.szName);
		cout << "�Ű����� 1�� ����" << endl;
	}

	Student(int no, const char* pName) {

		nNo = no;
		szName = new char[strlen(pName) + 1];
		strcpy(szName, pName);

		cout << szName << " �Ű����� 2�� ����" << endl;
	}

	~Student() {
		cout << "��ȣ : " << nNo << " �̸� : " << szName << "�� �Ҹ�Ǿ����ϴ�" << endl;
		// ���ٷ� ����~
		// cout << "��ȣ : " << nNo << "�� �����Ǿ����ϴ�" << endl;
		// cout << szName << "�Ҹ�" << endl;

		delete[] szName; //szName�� �迭�̴� delete[] �ϱ�
	}

	void princtStudent() {

		if (szName != nullptr) {
			cout << "��ȣ : " << nNo << " �̸� : " << szName << endl;
		}
		//cout << "��ȣ : " << nNo << " �̸� : " << szName << endl;
	}

	// ��ü�� ������ ���� ���α׷��� ���� �� ����Ÿ�Կ� &�� �پ��ִ�!
	Student& copy(Student &a) {  // &�� �ּҷε� ������, �� ���� ���۷���?�ε� ����Ѵ�. Student& �� �׷���!

		if (&a != this) { // this�� �������̴�.

			this->nNo = a.nNo; // �ӽ� ��ü�� a�� ���� �����ϴ� ��(�� ����)
			
			if (this->szName != NULL) { // szName�� ���� �ִٸ�(�� ����)

				cout << this->szName << " �Ҹ�" << endl;
				delete[] this->szName;  // �Ҹ��Ű��(�� ����)
			}
			this->szName = new char[strlen(a.szName) + 1]; // �ӽ� ��ü a�� ������ �ٽ� ����(�� ����)
			// ���ο� ���� ����־� a, b�� ������ �ּҰ� ���� ������ �����.(**)
			strcpy(this->szName, a.szName); // �ڱ� �ڽ��� ī���� �� ���� ����

			cout << this->szName << " ����" << endl;

		}
		return *this; // ������ ������ �Ͼ ���� ����Ͽ� �̷��� ���� ���� �ش�!
	}

	Student& operator=(Student &a) { // &�� �ּҷε� ������, �� ���� ���۷���?�ε� ����Ѵ�. Student& �� �׷���!
	// operator= ������ �����ε� : ���ݱ��� ���� Ÿ���� ����� ����� �� �̰� ���� ����� ������־�� �Ѵ�.
	// = �ڿ� Student�� ���� �� �ൿ�ϴ� �Լ��� ���� ��.
	// 	= �ڿ� ���� ���� �ٸ� �����ϴ� �����ε��� �����ϴ�.

		/* �� copy�� �ϴ����� �Ȱ����� copy�� �θ���
		
		this->nNo = a.nNo;
		this->szName = new char[strlen(a.szName) + 1];
		// ���ο� ���� ����־� a, b�� ������ �ּҰ� ���� ������ �����.
		strcpy(this->szName, a.szName);
		*/

		return copy(a);
	}
};

int main() {

	// 06-14 �ǽ� 
	Student a(1, "ȫ�ϳ�");
	Student b;
	a.princtStudent();
	b.princtStudent();

	//b = a; // ���� �״�� '���� ����' // �������� �� �̷��� ���� ���� �ּҸ� ����Ͽ� delete�� ���� �߻�
	//b.copy(a);

	b.operator=(a); // b = a; �� �Ȱ���

	cout << endl;
	a.princtStudent();
	b.princtStudent();

	strcpy(b.szName, "ȫ�浿"); // b�� szName�� ȫ�浿���� ����

	cout << endl;
	a.princtStudent();
	b.princtStudent();

	a = a;

	cout << endl;
	a.princtStudent();

	// 06-18 �ǽ� 
	Student c(2,"�����");

	c = a;

	cout << endl;
	a.princtStudent();
	c.princtStudent();

	Student d;
	Student e;

	d = e = a; // d.operator=(e.operator=(a)); �� ���� ��.
	// �������� �������� ��
	
	cout << endl;
	d.princtStudent();
	e.princtStudent();

	Student f = a; // = Student f(a); �̷� �����ڰ� ������ ������ ����!
	// ���� �ȳ�! �Ű����� 1��¥�� ������ �������~

	cout << "---"<<endl;
	f.princtStudent();
	a.princtStudent();
	cout << "---" << endl;

	/*
	strcpy(a.szName, "ȫ�浿");
	a.princtStudent(); // a = b �ؼ� �Ҵ���������, a���� �ٲ�ٰ� b���� �ٲ����� ����
	b.princtStudent();
	*/



	/*
	// 06-04 �ǽ�
	Student a(1, "���ϳ�"); // ���� (stack)
	Student* p = new Student(2, "ȫ�ϳ�"); // ���� (heap)


	Student stu[10]; // ���� (stack)

	stu[0].nNo = 3;
	strcpy(stu[0].szName, "��û��");
	stu[1].nNo = 4;
	strcpy(stu[1].szName, "������");


	Student* stu1 = new Student[10]; // ���� (heap)

	// ������ 2���� ������� �� ���ִ�.
	stu1[0].nNo = 5;  
	strcpy(stu1[0].szName, "�����");
	stu1[1].nNo = 6;
	strcpy(stu1[1].szName, "ȫ�浿");

	// +�� �ϰԵǸ� Ŭ������ ������ ��ŭ �پ�Ѵ´�.
	(stu1+2)->nNo = 7; // stu1[2].nNo = 7; �� �Ȱ��� ��
	strcpy(stu1[1].szName, "�ŵ�����");
	(stu1 + 2)->nNo = 8;
	strcpy(stu1[1].szName, "�鼳����");

	delete p;
	delete[] stu1;
	*/

	//Student a(1,"ȫ�ϳ�") / b=a / a=a / c=a / d=e=a ���� ���ߴ��� �ܰ躰�� �� �����ϱ�..(���ݾ� ���ƾ���!)

	return 0;
};