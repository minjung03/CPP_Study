
#include<iostream>
using namespace std;

	int nValue = 100;  // ::(영역연산자)가 붙으면 어딘가의 속한 전역변수 라는 의미
	void subFunc() {

		int nVal = 20;
		cout << "subFunc::전역변수 : " << nValue << endl; //100
		cout << "subFunc::지역변수 : " << nVal << endl;  //20

		nValue = 200;
		nVal = 10;

		cout << "subFunc::전역변수 : " << nValue << endl;  //200
		cout << "subFunc::지역변수 : " << nVal << endl;   //10

	}
	int main() {

		int nValue = 10;  // 지역변수 명과 전역변수명이 동일하다

		cout << "main::전역변수 : " << ::nValue << endl;  //200  전역변수를 접근하려면 영역 연산자(::)를 사용한다
		cout << "main::지역변수 : " << nValue << endl;    //10

		subFunc(); //서브 함수 호출

		cout << "main::전역변수 : " << ::nValue << endl;  //200
		cout << "main::지역변수 : " << nValue << endl;  //10

		return 0;
	}