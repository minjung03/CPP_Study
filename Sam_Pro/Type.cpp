#include<iostream>
using namespace std;

int main() {

	int val1 = 3;
	double val2 = 3.14;

	cout<< val1 + val2 << endl;
	cout << val1 + (int)val2 << endl;
	
	int up = 'A' + 1;   //char 老 锭 B, int 老 锭 66
	cout << up << endl;

	up = 65 + 1;         //char 老 锭 B, int 老 锭 66
	cout << up << endl;



	return 0;

}