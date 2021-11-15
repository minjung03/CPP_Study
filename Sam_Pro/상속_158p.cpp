#include<iostream>
#include <string>
using namespace std;

class Person {

protected :  
	string name;
	int age;

public :

	Person (){
		cout << "아빠" << endl;
	}
	Person(const string& name, int age) {
		this->name = name;
		this->age = age;

	}
	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다" << endl;
	}
};

class Student : public Person {

private : 

	int id;

public : 

	Student(int id, const string& name, int age) : Person(name, age) 
	{
		// : Person(name, age)이 없다면 부모 클래스의 기본 생성자를 호출한다. 없다면 오류
		//: Person(name, age) <- 자바의 super() 과 같다 ** 부모생성자 호출 단, 이름으로 작성
		this->id = id;
	}
	void ShowPerson() {
		cout << name << "의 나이는 " << age << "입니다" << endl; 
		// name, age -> private 이라 부를 수 없다. 그래서 부모 클래스에서 protected로 타입을 변경시켜준 것
		cout << id << "입니다" << endl;
	}
};

int main() {

	Student student(1234, "홍길동", 34);
	student.ShowPerson();
}