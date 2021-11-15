#include<iostream>
using namespace std;

int main() {

	short nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	short* pArray = nullptr;
	cout << pArray << endl;
	
	// *(parray+i) 와 *parray+i 는 다르다!!*** 1.배열 값 찍기  2. 배열 값에 +i 해서 찍기
	// 지금껏 과제한거 잘 정리하기, 수행시간에 필요할 수 있음**

	pArray = nArray;
	cout << pArray << endl;

	// 시험문제 낸다
	pArray++;
	cout << pArray << endl;  //short 타입이니 2바이트 증가 (int면 4바이트 증가)
	pArray += 2; // 4바이트 증가 (int이면 8바이트 증가)

	//int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int* pArray = nullptr;
	//pArray = nArray;  	// nArray = pArray; <- 에러 : 배열의 주소값은 변경 불가능
	//cout << *pArray <<", " << nArray[0] << endl;  // 0, 0

	//*pArray = 10;  // nArray[0] 값이 10으로 바뀐다.
	//cout << *pArray << ", " << nArray[0] << endl;  // 10, 10

	//pArray = &nArray[1];
	//cout << *pArray << ", " << nArray[1] << endl;  // 1, 1

	//// 아래들도 시험문제 내기 딱 좋음. 잘 알아두기!!
	//cout << sizeof(pArray) << endl;  // 4  **주소값만 차이남**(x86은 4, x64는 8 / 문제낼 떄 명시할꺼임)
	//cout << sizeof(*pArray) << endl;  // 4    여기부터는 x64로 바꾼다고 8 안나옴**
	//cout << sizeof(nArray) << endl;  // 40


	///*int count = sizeof(nArray) / sizeof(int);

	//for (int i = 0; i < count ; i++) {
	//	cout << i << " : " << nArray[i] << endl;
	//}
	//cout << sizeof(nArray) << endl;*/

	return 0;
}