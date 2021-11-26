#include<iostream>
#include <fstream>
#include <iomanip> // setw() 공백 사용 함수
using namespace std;

void main() {

	char addr[80];

	cout << "문자열 입력 :";
	while (cin.getline(addr, 80)) {
		if (strcmp(addr, "exit") == 0) break;
		cout << "문자열 출력 : " << addr << endl;
		cout << "문자열 입력 :";
	}
}