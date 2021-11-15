#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;


class Student {

public:

	int nNo;
	char *szName; // 사이즈가 변할 수 있는 것은 포인터로 잡는다. 

public:

	Student() {

		nNo = 0;
		szName = 0;
		cout << "매개변수 없는 생성자" << endl;
	
	};

	Student(int no, const char* pname) {

		nNo = no;

		szName = new char[strlen(pname) + 1];

		strcpy(szName, pname); // 뒤에 있는게 앞으로 들어온다.
		cout << "매개변수 2개인 생성자" << endl;
	}

	void printStudent() {

		if (szName != nullptr) { // 포인터일 때는 무조건 if로 체크
			cout << nNo << "," << szName << endl;
		}

	}

	~Student() {

		if (szName != nullptr) { // 초기화를 0으로 했었으니 조건을 이렇게 줘도 된다.
			cout << szName <<" 소멸" << endl; // st3는 내가 delete로 직접 삭제시켜야한다.
			delete[] szName;
		}	
		else {
			cout << "소멸" << endl;
		}
	}
};

int main() {

	Student st1; // 정적 : stact 영역에 생긴다. 프로그램이 끝날 때 사라짐

	cout << sizeof(st1) << endl;

	st1.nNo = 1;

	st1.szName = new char[20]; // 메모리를 잡아주어야 한다.
	strcpy(st1.szName, "송하나");

	Student st2(2, "홍길동");
	// Student st3("대장한");

	Student* st3 = new Student(); // 동적 : 실제 메모리가 heap영역에 생긴다. 언제든지 삭제 가능

	st1.printStudent();
	st2.printStudent();
	st3->printStudent();

	delete st3; // new와 짝궁이다. (갯수 꼭 맞춰주어야함)
	// 정적으로 만든 애들은 프로그램이 끝나면 알아서 없어지지만, 동적으로 만든 애들은 직접 삭제시켜 주어야 한다.
	// malloc -> new , free -> delete 느낌이다.

	return 0;
}