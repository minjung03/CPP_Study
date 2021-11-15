#include<iostream>
using namespace std;

class Person {


	int age;

public:

	Person* GetThis() { // p1의 타입과 같아야한다.
		return this; // 그때그때의 this를 사용하는 객체가 다르다.
		// this는 그때그때의 자신이다.
	}
	int GetAge() {
		return this->age; // 멤버 변수인지 확실하게 구분해주니 이렇게도 사용한다.
	}
};
int main() {

	Person* p1 = new Person();
	cout << p1 << endl; // 아래 문장과 같은 주소를 가진다.
	cout << p1->GetThis() << endl; // p1의 this를 리턴
	cout << p1->GetAge()<< endl;

	Person* p2 = new Person();
	cout << p2 << endl;  // 아래 문장과 같은 주소를 가진다.
	cout << p2->GetThis() << endl; // p1의 this를 리턴
	cout << p2->GetAge() << endl;

}