#include <iostream>
using namespace std;
#define MAX_COUNT 100 // #define�� ; �� ���δ�!!!!!  
// const int MAX_COUNT = 100; �� ����
#define MAX(a,b) a>b?a:b  // #define ���� ������ �Լ� ó���� ����

int main() {

	cout << MAX_COUNT << endl;  //100
	int nMAX = MAX(100, 200);
	cout << nMAX << endl;  //200

	cout << sizeof(int*) << endl;
	return 0;
}