#include<iostream>
using namespace std;

int main() {

	const char* pMessage = "welcome to korea";
	//char* pMessage = "welcome to korea";  <- 에러 - const 붙이기

	cout << pMessage << endl; //welcome to korea (null을 만날 때까지 찍는다)
	cout << *pMessage << endl;        //w
	cout << (pMessage + 1) << endl;  //e  (*를 빼면 e부터 다 나온다)
	cout << *(pMessage + 2) << endl;  //l
	cout << *(pMessage + 3) << endl;  //c

	cout << "----------------------------" << endl;

	int i;
	for (i = 0; i < *(pMessage + i) != NULL; i++) {  // *(pMessage + i) != NULL 이렇게 조건을 주는 것이 좋다!
		cout << "--" << *(pMessage + i) << endl;
		// null은 찍지 말기
	}
	cout << "글자 갯수는 : "<< i << endl;

	for (i = 11; i < 16; i++) {
		cout << "--" << *(pMessage + i) << endl;
	}
}