#include<iostream>
using namespace std;
int main() {

	double arr[6] = { 1,2,3,4 };
	cout << arr << endl;
	cout << endl;

	for (int i = 0; i < sizeof(arr)/sizeof(double) ; i++) {
		cout << &arr[i] << endl;
	}
	cout << endl;

	for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
		cout << arr[i] << endl;
	}
	cout << endl;

	return 0;

}