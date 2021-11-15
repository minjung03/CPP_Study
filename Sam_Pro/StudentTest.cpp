#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Student {

public:

	int nNo;
	char szName[20]; // 한글 9자리 정도(뒤에 null)

public:

	Student() {

		nNo = 0;
		szName[0] = 0;
		cout << "매개변수 없는 생성자" << endl;

	};

	Student(int no, const char *pname) {

		nNo = no;
		strcpy(szName, pname); // 뒤에 있는게 앞으로 들어온다.
		cout << "매개변수 2개인 생성자" << endl;
	}

	void printStudent() {

		cout << nNo << "," << szName << endl;
	}

	~Student() {
		cout << szName << " 소멸" << endl; // st3는 내가 delete로 직접 삭제시켜야한다.
	}
};

int main() {

	Student st1; // 정적 : stact 영역에 생긴다. 프로그램이 끝날 때 사라짐

	// cout << sizeof(st1) << endl; // int+char 20방 = 24바이트

	st1.nNo = 1;
	strcpy(st1.szName, "송하나");

	Student st2(2, "홍길동");

	// Student st3("대장한");

	Student* st3 = new Student(3,"연흥부"); // 동적 : 실제 메모리가 heap영역에 생긴다. 언제든지 삭제 가능


	st1.printStudent();
	st2.printStudent();
	st3->printStudent();

	delete st3; // new와 짝궁이다. (갯수 꼭 맞춰주어야함)
	// 정적으로 만든 애들은 프로그램이 끝나면 알아서 없어지지만, 동적으로 만든 애들은 직접 삭제시켜 주어야 한다.
	// malloc -> new , free -> delete 느낌이다.

	return 0;
}