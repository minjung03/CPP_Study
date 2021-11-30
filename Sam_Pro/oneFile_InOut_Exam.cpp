#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
using namespace std;

int main() {

	int nCount = 10;
	int nNo;
	char szName[20];

	ofstream out("output.dat");

	for (int i = 0; i < nCount; i++) {
		nNo = i + 1;
		sprintf(szName, "ÀÌ¸§_%d" , nNo);
		out << nNo << " "<< szName << endl;
	}
	out.close();

	ifstream infile("output.dat");
	for (int i = 0; i < nCount; i++) {
		infile >> nNo >> szName;
		cout << nNo << szName << endl;
	}
	infile.close();

	return 0;
}