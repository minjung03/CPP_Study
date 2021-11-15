#include<iostream>
#include <string>
using namespace std;

class Student {
	int id;
	string name;
};

// 상속의 방법
class stdGRD : public Student {
	int eng, kor, mat;
};