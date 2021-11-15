#include<iostream>
using namespace std;

class Person {

// 기본 private
	const char* name;
	const char* phone;
	int age;

public:
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                   
	// 생성자가 없으면 기본 생성자가 만들어진다.
	Person(const char* name, const char* phone, int age); // 생성자(리턴타입X)
	
	// 이 곳에 함수를 전부 작성하게되면 자동으로 inline함수가 된다.(짧은건 괜찮지만 긴 건 프로토타입주고 밖에서 내용만들기)
	void ShowData();
	//void SetData(const char* name, const char* phone, int age);

	//~Person() { cout << "객체가 소멸합니다" << endl; };
	~Person();

};
/*
void Person::SetData(const char* name, const char* phone, int age) { // 데이터를 한번에 넣는 메소드
	
	// 멤버변수/메소드 앞에만 this가 붙는다.
	// 멤버변수와 매개변수 이름이 같은 경우 이름을 다르게 주거나, this 사용.
	this->name = name;
	this->phone = phone;
	this->age = age;
}
*/
Person::~Person() {
	cout << "객체가 소멸합니다" << endl;
}
Person::Person(const char* name, const char* phone, int age) { // 생성자(리턴타입X)
	this->name = name;
	this->phone = phone;
	this->age = age;
}
void Person::ShowData() {

	cout << "name : " << name << endl;
	cout << "phone : " << phone << endl;
	cout << "age : " << age << endl;
}

int main() {

	// Person p = { "KIM" , "013-113-1113", 22 };  // 매개변수가 private이라 에러(이니셜 라이저값이 많습니다)
	
	// Person p;
	// p.SetData("KIM", "013-113-1113", 22); 
	
	Person p("KIM", "013-113-1113", 22);  // 위 두 문장과 같은 결과

	// Person p1; // 기본생성자가 없으므로 에러

	p.ShowData();

	return 0;
}