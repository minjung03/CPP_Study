#include<iostream>
#include <iomanip> // setw() 공백 사용 함수
using namespace std;

void main() {

	int num1 = 2018;
	double num2 = -100.0;
	double num3 = 123.456;

	cout << "소수점 생략하지 않음" << endl;
	cout.setf(ios::showpoint);
	cout << "소수점 생략하지 않는 num1 = " << num1 << endl;
	cout << "소수점 생략하지 않는 num2 = " << num2 << endl;
	cout << "소수점 생략하지 않는 num3 = " << num3 << endl;

	cout << "부호 표시" << endl;
	cout.setf(ios::showpos);
	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;
	cout << "num3 = " << num3 << endl;
	cout.unsetf(ios::showpos); // 한번 없애주기

	cout << "접두어 표시" << endl;
	cout.setf(ios::showbase);
	cout << "접두어 표시 10진수 num = " << num1 << endl;
	cout << "접두어 표시 16진수 num = " << hex  << num1 << endl;
	cout << "접두어 표시 8진수 num = " << oct << num1 << endl;


	cout << "16진수 대문자 표시" << endl;
	cout.setf(ios::uppercase);
	cout << "접두어 표시 10진수 num = " << dec << num1 << endl;
	cout << "접두어 표시 16진수 num = " << hex << num1 << endl;
	cout << "접두어 표시 8진수 num = " << oct << num1 << endl;

}