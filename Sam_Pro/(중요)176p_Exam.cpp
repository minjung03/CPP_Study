#include<iostream>
using namespace std;

class Person {
public:
	string name;
	int hakbun;

	Person(string na, int hak) {
		name = na;
		hakbun = hak;
	}
	virtual ~Person() {
		cout << name << " Person 소멸" << endl;
	}
	virtual void Printshow() {
		cout << "이름 : " << name << endl;
		cout << "번호 : " << hakbun << endl;
	}
	void PTest() {
		cout << "PTest" << endl;
	}
};

class Student : public Person {

public:
	string university;

    Student(string na, int hak, string university) : Person(na, hak){
		this->university = university;
	}
	virtual ~Student() {
		cout << name << " Student 소멸" << endl;
	}
	virtual void Printshow() { //오버라이딩
		Person::Printshow();
		cout << "학교 : " << university << endl;
	}
	void STest() {
		cout << "STest" << endl;
	}
};

class Employee : public Person{
public:
	string company;
	int groes;

	Employee(string company, int groes, string na, int hak) : Person(na, hak){
		this->company = company;
		this->groes = groes;
	}
	virtual ~Employee() {
		cout << name << " Employee 소멸" << endl;
	}
	virtual void Printshow() {
		Person::Printshow();
		cout << "회사 : " << company << endl;
		cout << "연봉 : " << groes << endl;
	}
};

int main() {

	Student st1("홍길동", 2018, "한국대학교"); //st1, st3 둘 다 프로그램이 끝난 뒤에 소멸이 된다.
	st1.Printshow();

	cout << "------------------------------" << endl;

	Student* st2 = new Student("홍길순", 2021, "미림"); // 먼저 소멸
	st2->Printshow();
	delete st2;

	cout << "------------------------------" << endl;

	Person st3("대장아", 2019); //st1, st3 둘 다 프로그램이 끝난 뒤에 소멸이 된다.
	st3.Printshow();

	cout << "------------------------------" << endl;

	// 시험 내면 어려워함** 공부 잘하기

	// 사용하는건 어떤 타입으로 만들었냐가 중요**
	// 오버라이딩 된 것은 자식 것을 사용**
	Person* st4 = new Student("흥부", 2020, "마이스터"); // 포인터는 Person, 포인터가 즉 타입. // Person 것 사용
	// 부모 포인터 = 자식 // 자식 타입을 부모 타입으로 형 변환 - 거꾸로는 에러남**
	st4->Printshow();
	st4->PTest();
	// st4->STest(); - STest()사용 불가능. 타입이 Person이다. 부모 쪽에 없는 것은 사용 불가능 
	// 접근할 수 없지만, 가지고는 있어서 형 변환 시 사용 가능하다.**
	((Student*)st4)->STest(); // 자식 타입으로 형 변환 시 사용가능. ** () 꼭 두번 묶기 **
	delete st4;

	cout << "------------------------------" << endl;

	Person* st5 = new Employee("카카오",1000,"놀부", 2000);
	st5->Printshow();
	delete st5;

	cout << "------------------------------" << endl;

	// **virtual을 사용해야 다형성이 가능하다**

}