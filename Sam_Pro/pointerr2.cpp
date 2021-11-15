#include <iostream>
using namespace std;
int main() {

	
	int a = 3;     int* ptr = nullptr;
	cout << ptr <<endl;
	ptr = &a;

	cout << "a의 주소 값을 참조합니다." <<ptr << endl;
	cout << "a의 값을 간접 참조합니다." <<*ptr << endl;

	*ptr = 10;
	cout << "a의 값을 간접 찹조로 바꿉니다." <<*ptr << endl;
	cout << "a의 주소 값은 변하지 않습니다." <<ptr << endl;
	return 0;
}