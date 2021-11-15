#include<iostream>
using namespace std;

int main() {

	//int& ra; 
	
	//int& ra = 30;

	/*int a = 30;
	int& ra = &a;*/

	/*int& ra = nullptr;*/
	/*int& ra = NULL;*/

	int a = 10, b = 20;
	int& ra = a;

	ra = b; // a = b 하고 똑같다!

	cout << a << endl;
	cout << b << endl;


}