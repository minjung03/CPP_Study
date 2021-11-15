#include <iostream>
using namespace std;

int main() {
	
	int value = 10;
	void* pValue = nullptr; // void * 는 타입을 모른다. 이게 무슨 타입인지 몰라서 
	pValue = &value;

	cout << "pValue = " << pValue << endl; //주소
	cout << "*pValue = " << *(int*)pValue << endl;  //10, 그러니 출력시 int*로 형변환 해야한다.
	// 이런거 시험 잘냄. int가 아닐 수도 있다!!! (short*) 등 데이터 타입을 잘보자**
	cout << "value = " << value << endl;   //10

	*(int*)pValue = 20;

	cout << "pValue = " << pValue << endl;  //위와 같은 주소
	cout << "*pValue = " << *(int*)pValue << endl;  //20
	cout << "value = " << value << endl;    //20 , value의 값도 함께 바뀐다!!

	return 0;
}