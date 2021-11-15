#include <iostream>
using namespace std;
int main() {

	int a = 1, b = 1;
	const int* ptr = &a;
	// *ptr = 2; 
	a = 3; //ptr 통해서만 변경 불가능하지 a를 통해서는 가능
	ptr = &b; //ptr을 통째로 바꾸기도 가능

}