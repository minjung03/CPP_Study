#include<iostream>
#include <string>
using namespace std;

// ����� ���
class stdGRD {
public:
	int id;
	string name;
};

class Student : public stdGRD {
public:
	int eng, kor, mat;
};


// ������ ���
class Gread {
public:
	int eng, kor, mat;
};

class stdGRD1{
public:
	int id;
	string name;

	Gread g;
};


int main(){

	Student stu1;
	stu1.id = 1111;
	stu1.name = "ȫ�浿";
	stu1.kor = 50; // �ٷ� ���� (����� ���)


	stdGRD1 stu2;
	stu2.id = 2222;
	stu2.name = "����ġ";
	stu2.g.kor = 50; // g�� ���� ���� (������ ���)

	// ex)
	// ī�޶� ���� ��ȭ���� ��
	// ��ȭ��(���), ī�޶�(����)

	// is a  -> ���
	// has a -> ����
}