#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<fstream>
using namespace std;

int main() {

	int nCount = 10;
	int nNo;
	char szName[20];

	fstream out("output.dat" );
	// fstream 입/출력이 전부 가능!

	for (int i = 0; i < nCount; i++) {
		nNo = i + 1;
		sprintf(szName, "이름_%d", nNo);
		out << nNo << " " << szName << endl;
	}
	// out.close();
	
	// ifstream infile("output.dat");
	out.seekg(0, ios::beg);
	for (int i = 0; i < nCount; i++) {
		out >> nNo >> szName;
		cout << nNo << " " << szName << endl;
	}
	out.close();

	// virtual
	// struct

	return 0;
}