
#include<iostream>
using namespace std;

int main() {

	int iCode = 1000;
	cout << iCode << " -> " << (char)iCode << endl;

	iCode = (int)1.4321;
	cout << iCode << endl;

	iCode = (int)1.5678;
	cout << iCode << endl;

	double dResult = 0.0;
	dResult = 100 + 3 / 2;
	cout << dResult << endl;

	dResult = 100 + double(3) / 2;  // double(3) = (double) 3   같은 방법
	cout << dResult << endl;

	return 0;
}







