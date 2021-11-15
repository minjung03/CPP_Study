#include <iostream>
using namespace std;


int main() {

	int* ptr = nullptr;
	int arr[4] = { 1,2,3,4 };
	ptr = arr;

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " ";

	}
	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << *(ptr + i) << " ";
	}
	cout << endl;


	for (int i = 0; i < 4; i++) {
		cout << *(arr+i) << " ";  //배열명도 포인터처럼 사용 가능
	}
	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << ptr[i] << " ";  // 포인터도 배열처럼 사용 가능
	}
	cout << endl;

	cout << ptr << endl;
	ptr++; // 포인터는 주소 값이 변할 수 있다.
	cout << *(ptr) << endl;
	cout << ptr << endl;



	cout << arr << endl;
	arr++; // 에러 : 배열과 포인터의 차이점 . 배열이 가지는 주소 값은 변할 수 없다.
	cout << *(arr) << endl;
	cout << arr << endl;

	return 0;
}