#include <iostream>
using namespace std;
int main() {

	int a = 1, b = 1;
	const int* ptr = &a;
	// *ptr = 2; 
	a = 3; //ptr ���ؼ��� ���� �Ұ������� a�� ���ؼ��� ����
	ptr = &b; //ptr�� ��°�� �ٲٱ⵵ ����

}