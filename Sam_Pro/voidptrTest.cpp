#include <iostream>
using namespace std;
int main() {

	void* pValue = 0;

	int val = 100;
	pValue = &val;
	// *pValue = 200;  // ���� �߻� : pValue �� 200�� int������ �𸥴�(���� voidŸ��) ���� ����ȯ ���־�� ��.

	*(int*)pValue = 200;  // �� pValue �ٷ� �տ� (int *)�� �־��־�� �Ѵ�.
	cout << *(int*)pValue << endl;  // ���⼭�� ����ȯ�� ���־�� �Ѵ�.

	cout << "=======================================================" << endl;
	
	char pMessage[] = "welcome to korea" ;
	char* pP = pMessage; // &pMessage ��������. �迭�� ��ü�� �ּҰ��̱� ������ �����߻�
	for (int i = 0; i < sizeof(pMessage); i++) {  // ���ڱ����� ��� �ʹ� �ϸ� i < sizeof(pMessage)-1 

		cout << "++ " << *pP << endl; 
		pP++;

		// cout << *pMessage << endl;  
		// pMessage++; // ���� �߻�(�迭���� ���� �ּ� ���� �Ұ�)
	}
	cout << sizeof(pMessage) << endl;  //17

	int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	int* pArray;

	pArray = nArray;
	// nArray = pArray; �迭���� ���� �ּҴ� ���� �Ұ�



}