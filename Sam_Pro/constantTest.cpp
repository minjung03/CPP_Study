#include <iostream>
using namespace std;
#define MAX_COUNT 100 // #define은 ; 안 붙인다!!!!!  
// const int MAX_COUNT = 100; 와 같음
#define MAX(a,b) a>b?a:b  // #define 으로 간단한 함수 처리도 가능

int main() {

	cout << MAX_COUNT << endl;  //100
	int nMAX = MAX(100, 200);
	cout << nMAX << endl;  //200

	cout << sizeof(int*) << endl;
	return 0;
}