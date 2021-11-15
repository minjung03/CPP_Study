#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

class Camera {
public:
	Camera() { cout << "Camera ������ " << endl; };
	~Camera() { cout << "~Camera �Ҹ��� " << endl; };

	void shutter() {
		cout << "������ ���." << endl;
	}
	void ShowInfo() {
		cout << "200�� ȭ��" << endl;
	}
};

class Phone {

	char number[12];

public:
	Phone() { cout << "Phone ������ " << endl; };
	Phone(const char* num) { 
		strcpy(number, num);
		// cout << number << endl;
	};
	~Phone() { cout << "~Phone �Ҹ��� " << endl; };

	void Call() {
		cout << "��ȭ�� �ɴ�." << endl;
	}

	void ShowInfo() {
		cout << "��ȭ��ȣ : " << number << endl;
	}

	void SetNumber(const char* num) {
		strcpy(number, num);
	}

};

class smartPhone : public Camera, public Phone { //  ���� ���
public:
	smartPhone() { cout << "smartPhone ������ " << endl; };
	smartPhone(const char* num) : Phone(num){
		// �����ڸ� :: ���� �θ��� �ʰ� ����!! -> ���� : �� ȣ���ؾ� �Ѵ�.
		cout << "��ȭ��ȣ : " << num << endl;	
	};
	~smartPhone() { cout << "~smartPhone �Ҹ��� " << endl; };
};

class mobilePhone : public Phone { // ���� ���

	Camera came; // ����

public:
	mobilePhone() { cout << "mobilePhone ������ " << endl; };
	mobilePhone(const char* num) : Phone(num) {
		cout << "��ȭ��ȣ : " << num << endl;
	};
	~mobilePhone() { cout << "~mobilePhone �Ҹ��� " << endl; };

	void clickShutter() {
		came.shutter();
	}
};

class mobileDevice {

	Camera came; // ����
	Phone phone; // ����

public:
	mobileDevice() { cout << "mobileDevice ������ " << endl; };
	mobileDevice(const char* num){
		phone.SetNumber(num);
		cout << "��ȭ��ȣ : " << num << endl;
	};
	~mobileDevice() { cout << "~mobileDevice �Ҹ��� " << endl; };

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
	mp.ShowInfo(); // Phone�� ShowInfo
	mp.clickShutter();

	cout << endl;

	mobileDevice md("01096187003");
	md.mobileCall();
	md.mobileShowInfo();
	md.clickShutter();

	cout << endl;

	return 0;

}