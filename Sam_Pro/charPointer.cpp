#include<iostream>
using namespace std;

int main() {

	const char* pMessage = "welcome to korea";
	//char* pMessage = "welcome to korea";  <- ���� - const ���̱�

	cout << pMessage << endl; //welcome to korea (null�� ���� ������ ��´�)
	cout << *pMessage << endl;        //w
	cout << (pMessage + 1) << endl;  //e  (*�� ���� e���� �� ���´�)
	cout << *(pMessage + 2) << endl;  //l
	cout << *(pMessage + 3) << endl;  //c

	cout << "----------------------------" << endl;

	int i;
	for (i = 0; i < *(pMessage + i) != NULL; i++) {  // *(pMessage + i) != NULL �̷��� ������ �ִ� ���� ����!
		cout << "--" << *(pMessage + i) << endl;
		// null�� ���� ����
	}
	cout << "���� ������ : "<< i << endl;

	for (i = 11; i < 16; i++) {
		cout << "--" << *(pMessage + i) << endl;
	}
}