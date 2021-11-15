#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Camera {
public:
	Camera() { cout << "Camera 생성자 " << endl; };
	~Camera() { cout << "~Camera 소멸자 " << endl; };

	void shutter() {
		cout << "사진을 찍다." << endl;
	}
	void ShowInfo() {
		cout << "200만 화소" << endl;
	}
};

class Phone {

	char number[12];

public:
	Phone() { cout << "Phone 생성자 " << endl; };
	Phone(const char* num) { 
		strcpy(number, num);
		// cout << number << endl;
	};
	~Phone() { cout << "~Phone 소멸자 " << endl; };

	void Call() {
		cout << "전화를 걸다." << endl;
	}

	void ShowInfo() {
		cout << "전화번호 : " << number << endl;
	}

	void SetNumber(const char* num) {
		strcpy(number, num);
	}

};

class smartPhone : public Camera, public Phone { //  다중 상속
public:
	smartPhone() { cout << "smartPhone 생성자 " << endl; };
	smartPhone(const char* num) : Phone(num){
		// 생성자를 :: 으로 부르지 않게 조심!! -> 옆에 : 로 호출해야 한다.
		cout << "전화번호 : " << num << endl;	
	};
	~smartPhone() { cout << "~smartPhone 소멸자 " << endl; };
};

class mobilePhone : public Phone { // 단일 상속

	Camera came; // 위임

public:
	mobilePhone() { cout << "mobilePhone 생성자 " << endl; };
	mobilePhone(const char* num) : Phone(num) {
		cout << "전화번호 : " << num << endl;
	};
	~mobilePhone() { cout << "~mobilePhone 소멸자 " << endl; };

	void clickShutter() {
		came.shutter();
	}
};

class mobileDevice {

	Camera came; // 위임
	Phone phone; // 위임

public:
	mobileDevice() { cout << "mobileDevice 생성자 " << endl; };
	mobileDevice(const char* num){
		phone.SetNumber(num);
		cout << "전화번호 : " << num << endl;
	};
	~mobileDevice() { cout << "~mobileDevice 소멸자 " << endl; };

	void clickShutter() {
		came.shutter();
	}
	void mobileCall() {
		phone.Call();
	}
	void mobileShowInfo() {
		phone.ShowInfo();
	}
};

int main() {

	smartPhone sp("01096187003");
	sp.Call();
	//sp.ShowInfo();
	sp.shutter();

	cout << endl;

	mobilePhone mp("01096187003");
	mp.Call();
	mp.ShowInfo(); // Phone의 ShowInfo
	mp.clickShutter();

	cout << endl;

	mobileDevice md("01096187003");
	md.mobileCall();
	md.mobileShowInfo();
	md.clickShutter();

	cout << endl;

	return 0;

}