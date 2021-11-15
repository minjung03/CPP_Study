#include<iostream>
using namespace std;

class Student {

private:

	char* name;
	int age;

public:

	Student(const char* myname, int myage) {
		                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              
		int len = strlen(myname) +1 ; // null 공간을 위해 +1 해준다. 시험내면 많이 틀림!
		name = new char[len];
		strcpy_s(name, len, myname);
		age = myage;
	}

	void ShowStudentInfo() {

		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
	}

	~Student() {

		cout << name << " called destructor!" << endl; 
		// 만들어진 순서와 반대로 소멸된다(홍길동이 제일 마지막에 만들어짐 -> 제일 먼저 소멸)
		delete[]name;
	}
};

int main(void) {

	Student student1("lee mee rim", 33);
	cout << sizeof(Student) << endl; // 4바이트 멤버변수가 2개 들어있어서 8바이트가 출력됨

	Student student2("hong gil dong", 34);

	cout << &(student1) << endl;
	cout << &(student2) << endl;

	student1.ShowStudentInfo();
	student2.ShowStudentInfo();


	return 0;
}