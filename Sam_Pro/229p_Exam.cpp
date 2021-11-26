#include<iostream>
#include <fstream>
#include <iomanip> // setw() 공백 사용 함수
using namespace std;

int main() {
	cout.put('M');
	cout.put('I');
	cout.put('R');
	cout.put('I');
	cout.put('M');
	cout << endl;
	
	cout.put('M').put('I').put('R').put('I').put('M');

	cout << endl;

	char str[] = "C++ Exiting";
	cout.write(str, 3);

	return 0;
}