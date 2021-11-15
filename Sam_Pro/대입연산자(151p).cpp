#include<iostream>
#include<cstring>
using namespace std;

class Student {

private:  
	char* name;
	int age;

public :

	Student() {
		name = 0;
		age = 0;
	}

	Student(const char* name, int age) : age(age) {
		this->name = new char[20];
		strcpy_s(this->name, 20, name);
		cout << this->name << endl;
	}

	void showInfo() {
		cout << "이름 : " << name << endl;
		cout << "나이 : " << name << endl;
	}

	Student& operator=(Student& ref) {

		cout << this->name << endl;
		delete[] name;

		name = new char[20];
		strcpy_s(this->name, 20, ref.name);
		cout << this->name << endl;

		age = ref.age;
		return *this;
		// 65줄 처럼 대입이 연달아 일어날 경우를 대비해 this를 반환!** 꼭 기억하기**

	}

	~Student() {

		if (name != NULL) { // 존재할 때만 삭제
			cout << this->name << endl;
			delete[] name;

			cout << "~Student 소멸자 호출 !" << endl;
		}
	}
};

int main() {

	Student st1("미림인", 27);
	Student st2("마이스터인", 10);

	st2 = st1;
	
	st1.showInfo();
	st2.showInfo();

	Student st3;
	st3 = st1 = st2;

	Student st4;
	st4 = st1;

	return 0;
}