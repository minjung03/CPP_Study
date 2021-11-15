#include <iostream>
using namespace std;
int main() {

	void* pValue = 0;

	int val = 100;
	pValue = &val;
	// *pValue = 200;  // 에러 발생 : pValue 는 200이 int형인지 모른다(아직 void타입) 강제 형변환 해주어야 함.

	*(int*)pValue = 200;  // 꼭 pValue 바로 앞에 (int *)를 넣어주어야 한다.
	cout << *(int*)pValue << endl;  // 여기서도 형변환을 해주어야 한다.

	cout << "=======================================================" << endl;
	
	char pMessage[] = "welcome to korea" ;
	char* pP = pMessage; // &pMessage 오류난다. 배열명 자체가 주소값이기 때문에 오류발생
	for (int i = 0; i < sizeof(pMessage); i++) {  // 글자까지만 찍고 싶다 하면 i < sizeof(pMessage)-1 

		cout << "++ " << *pP << endl; 
		pP++;

		// cout << *pMessage << endl;  
		// pMessage++; // 오류 발생(배열명이 가진 주소 변경 불가)
	}
	cout << sizeof(pMessage) << endl;  //17

	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray;

	pArray = nArray;
	// nArray = pArray; 배열명이 가진 주소는 수정 불가



}