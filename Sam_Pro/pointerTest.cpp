#include <iostream>
using namespace std;

int main() {
	
	int value = 10;
	void* pValue = nullptr; // void * �� Ÿ���� �𸥴�. �̰� ���� Ÿ������ ���� 
	pValue = &value;

	cout << "pValue = " << pValue << endl; //�ּ�
	cout << "*pValue = " << *(int*)pValue << endl;  //10, �׷��� ��½� int*�� ����ȯ �ؾ��Ѵ�.
	// �̷��� ���� �߳�. int�� �ƴ� ���� �ִ�!!! (short*) �� ������ Ÿ���� �ߺ���**
	cout << "value = " << value << endl;   //10

	*(int*)pValue = 20;

	cout << "pValue = " << pValue << endl;  //���� ���� �ּ�
	cout << "*pValue = " << *(int*)pValue << endl;  //20
	cout << "value = " << value << endl;    //20 , value�� ���� �Բ� �ٲ��!!

	return 0;
}