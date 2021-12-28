#include <iostream>
#include <map>
#include <ostream>
#include<vector>
using namespace std;

class Person{
public:
	string lastname;
	string firstname;

	// 친구 클래스 (내꺼를 저 아이도 사용할 수 있다.)
	friend class PersonLessTham;

	Person(const string& lastname, const string& firstname) {
		this->lastname = lastname;
		this->firstname = firstname;
	}
};

// ** Object를 비교 할 때는 이러한 방법을 많이 사용한다.
// string 같은 경우는 자기가 알아서 false/true 반환을 하지만,
// Object 는 그렇지 않으니 누가 더 작은지를 정의해주는 것
class PersonLessTham {
public:

	bool operator() (const Person& p1, const Person& p2) const {
		// 가독성 있게 코드를 작성하자
		if (p1.firstname < p2.firstname) {
			return true;
		}
		else if (p1.firstname == p2.firstname) {
			return p1.lastname < p2.lastname;
		}
		else {
			return false;
		}
	}

};

int main(){

	map<Person, bool, PersonLessTham> m;

	Person p1("흥부","연");
	Person p2("장화", "배");
	Person p3("길동", "홍");
	Person p4("개소문", "연");

	m[p1] = true;
	m[p2] = true;
	m[p3] = true;
	m[p4] = true;

	for (map<Person, bool>::iterator ii = m.begin(); ii != m.end(); ++ii) {
		cout << ((*ii).first).firstname << " " << ((*ii).first).lastname << endl;
	}

}