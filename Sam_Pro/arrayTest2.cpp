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

	// �Ұ� nArray = pArray;

	cout << sizeof(pArray) << endl;  // 4
	cout << sizeof(nArray) << endl;  // 40 short : 20  double : 80  char : 10
	cout << sizeof(*pArray) << endl; //�� ���� ������ 4  shirt : 2   double : 8   char : 1
	// ���� �� ���´� short�ε� �ٲ㼭 �غ���!!

	return 0;
}