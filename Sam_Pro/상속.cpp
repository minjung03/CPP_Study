#include<iostream>
#include <string>
using namespace std;

class Student {
	int id;
	string name;
};

// ����� ���
class stdGRD : public Student {
	int eng, kor, mat;
};