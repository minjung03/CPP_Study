#include<iostream>
using namespace std;

//Student 클래스 정의
class Student {
private:
	int nHakbun;
	const char* sName;

public:
	Student();  // 생성자 프로토타입
	Student(int nHakbun, const char* sName); // 생성자 오버로딩
	void show();  // 함수 프로토타입
};


//Student 클래스 멤버 함수의 정의
Student::Student() {
	nHakbun = 1234;
	sName = "이사랑";
	cout << "학번이 등록되었습니다." << endl;

}
Student::Student(int nHakbun, const char* _sName) {
	this->nHakbun = nHakbun; // 같은 이름일 때에는 매개변수에 매개변수 값을 넣는 것이다.
	sName = _sName;  // this로 멤버변수라 표시하거나, 매개변수 이름을 다르게 주거나..
	// 왜 -> 로 주나? 사실 매개변수들 앞에 Student * this 가 생략되있는 것.
	// ex) 매개변수 Student * this int nHakbun 인 것
	cout << "매개변수로 학번이 등록되었습니다." << endl;

}
void Student::show(){
	cout << "학번은 " << nHakbun << endl;
	cout << "이름은 " << sName << endl;

}


int main() {

	Student student1;  //클래스 변수 선언/객체 생성(생성자 호출)
	// 매개변수 없는 생성자를 사용할 때는 ()를 안쓴다. 시험에 내면 100% 틀림!!
	student1.show();

	Student student2(5678,"김미림");
	student2.show();

	return 0;
}