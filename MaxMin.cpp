#include<iostream>
using namespace std;

int main() {

	char cMax = 0x7f, cMin = 0x7f + 1;
	cout << "char �ڷ����� �ִ밪�� " << (int)cMax << endl;
	cout << "char �ڷ����� �ּҰ��� " << (int)cMin << endl;

	int iMax = 0x7fffffff, iMin = 0x7fffffff + 1;
	cout << "int �ڷ����� �ִ밪�� " << (int)iMax << endl;
	cout << "int �ڷ����� �ִ� ���� " << (int)iMin << endl;

	return 0;
}