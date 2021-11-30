#include<iostream>
#include <iomanip> // setw() 공백 사용 함수
using namespace std;

void ShowFormat() {
	cout << '@';
	cout.width(10);
	cout << "MIRIM  " << "MEISTER" << endl;
	cout.width(10);
	cout << "School" << endl;
	cout.width(7);
	cout << 1234 << endl;

}

void main()
{
	ShowFormat();

	cout << endl;

	cout.fill('*');

	ShowFormat();

	cout.precision(5);
	cout << 12.34 / 5 << endl;
}