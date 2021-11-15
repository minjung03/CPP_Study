#include<iostream>
using namespace std;


int main() {

	unique_ptr<int> ptr(new int);
	unique_ptr<int[]> pArray(new int[10]);


	*ptr = 100;
	cout << *ptr << endl;

	for (int i = 0; i < 10; i++) {
		pArray[i] = 20 + i;
	}
	for (int i = 0; i < 10; i++) {
		cout << pArray[i] << " ";
	}
	cout << endl;

	return 0;
}