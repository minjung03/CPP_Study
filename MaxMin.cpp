#include<iostream>
using namespace std;

int main() {

	char cMax = 0x7f, cMin = 0x7f + 1;
	cout << "char 자료형의 최대값은 " << (int)cMax << endl;
	cout << "char 자료형의 최소값은 " << (int)cMin << endl;

	int iMax = 0x7fffffff, iMin = 0x7fffffff + 1;
	cout << "int 자료형의 최대값은 " << (int)iMax << endl;
	cout << "int 자료형의 최대 값은 " << (int)iMin << endl;

	return 0;
}