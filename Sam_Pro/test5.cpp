
#include<iostream>
using namespace std;

	int nValue = 100;  // ::(����������)�� ������ ����� ���� �������� ��� �ǹ�
	void subFunc() {

		int nVal = 20;
		cout << "subFunc::�������� : " << nValue << endl; //100
		cout << "subFunc::�������� : " << nVal << endl;  //20

		nValue = 200;
		nVal = 10;

		cout << "subFunc::�������� : " << nValue << endl;  //200
		cout << "subFunc::�������� : " << nVal << endl;   //10

	}
	int main() {

		int nValue = 10;  // �������� ��� ������������ �����ϴ�

		cout << "main::�������� : " << ::nValue << endl;  //200  ���������� �����Ϸ��� ���� ������(::)�� ����Ѵ�
		cout << "main::�������� : " << nValue << endl;    //10

		subFunc(); //���� �Լ� ȣ��

		cout << "main::�������� : " << ::nValue << endl;  //200
		cout << "main::�������� : " << nValue << endl;  //10

		return 0;
	}