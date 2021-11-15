#include<iostream>
using namespace std;

int main() {

	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray = nullptr;
	int count = sizeof(nArray) / sizeof(int);  
	pArray = nArray;

	//for (int i = 0; i < count; i++) {
	//	cout << i << " : " << nArray[i] << endl;
	//}
	// cout << sizeof(nArray) << endl;   //40

	cout << nArray[0] << "," << *pArray << endl;

	*pArray = 10;

	cout << nArray[0] << "," << *pArray << endl;

	pArray = &nArray[1];

	cout << nArray[0] << "," << *pArray << endl;

	pArray++;

	cout << nArray[0] << "," << *pArray << endl;


	pArray = nArray;

	cout << *pArray << ", " << nArray[0] << endl;
	cout << pArray[0] << ", " << *nArray << endl;

	// 불가 nArray = pArray;

	cout << sizeof(pArray) << endl;  // 4
	cout << sizeof(nArray) << endl;  // 40 short : 20  double : 80  char : 10
	cout << sizeof(*pArray) << endl; //각 방의 사이즈 4  shirt : 2   double : 8   char : 1
	// 시험 잘 나온다 short로도 바꿔서 해보기!!

	return 0;
}