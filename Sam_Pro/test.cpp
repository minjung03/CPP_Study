#include <iostream>
using namespace std;

int main() {

	cout << "char의 크기 : " << sizeof(char) << "바이트\n";
	cout << "unsigned char의 크기 : " << sizeof(unsigned  char) << "바이트\n";
	cout << "short int의 크기 : " << sizeof(short int) << "바이트\n";
	cout << "unsigned short int의 크기 : " << sizeof(unsigned short int) << "바이트\n";
	cout << "int의 크기 : " << sizeof(int) << "바이트\n";
	cout << "unsigned int의 크기 : " << sizeof(unsigned int) << "바이트\n";
	cout << "long의 크기 : " << sizeof(long) << "바이트\n";   // 4 바이트
	cout << "long long의 크기 : " << sizeof(long long) << "바이트\n";  // 8 바이트
	cout << "unsigned long의 크기 : " << sizeof(unsigned long) << "바이트\n";
	cout << "float의 크기 : " << sizeof(float) << "바이트\n";
	cout << "double의 크기 : " << sizeof(double) << "바이트\n";
	cout << "포인터 형의 크기 : " << sizeof(void*) << "바이트\n";  // void*(포인터)는 알아둘 필요 있음
	cout << "int *(포인터)의 크기 : " << sizeof(int *) << "바이트\n";
}