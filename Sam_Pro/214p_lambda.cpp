#include <iostream>
#include<string>
using namespace std;

int main() {

	// ** 람다(lambda)는 이름 없는 함수(함수명이 없는 함수)이다 
	auto campus = [](string x, string y) {
		cout << x + y << endl;
	};

	campus("미림", "마이스터고");
	campus("한국", "대학교");

	return 0;
}
