#include<iostream>
using namespace std;

class Cat {

private :
	// 멤버 변수를 동적으로 할당한다.
	int* pAge = new int;
	const char* pName =  new char;

public:

	Cat() {
		*pAge = 18;
		pName = "야옹이"; // *pName 하는거 아님!!
	}

	~Cat() {
		// cat를 delete하기 전에, 동적으로 만든 멤버 변수의 메모리 먼저 끊어주기
		// delete 연산자를 사용해 멤버 변수의 메모리를 해제한다.
		delete pAge;
		delete pName;
	}

	int getAge() {
		return *pAge;
	}
	void setAge(int age) {
		*pAge = age;
	}

	char* getName() {
		return (char*)pName;
	}
	void setName(const char* name) {
		pName = name;
	}

};

int main() {


	Cat* cat = new Cat;
	cout << "고양이의 나이 : " << cat->getAge() << ", 고양이의 이름 : " << cat->getName() << endl;

	cat->setAge(20);
	cat->setName("방울이");

	cout << "고양이의 나이 : " << cat->getAge() << ", 고양이의 이름 : " << cat->getName() << endl;

};