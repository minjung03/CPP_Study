#include<iostream>
#include <string>
using namespace std;

// 상속의 방법
class stdGRD {
public:
	int id;
	string name;
};

class Student : public stdGRD {
public:
	int eng, kor, mat;
};


// 위임의 방법
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
	stu1.name = "홍길동";
	stu1.kor = 50; // 바로 접근 (상속의 방법)


	stdGRD1 stu2;
	stu2.id = 2222;
	stu2.name = "전우치";
	stu2.g.kor = 50; // g를 통해 접근 (위임의 방법)

	// ex)
	// 카메라를 가진 전화기인 폰
	// 전화기(상속), 카메라(위임)

	// is a  -> 상속
	// has a -> 위임
}