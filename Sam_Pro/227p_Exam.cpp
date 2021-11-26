#include<iostream>
#include <fstream>
#include <iomanip> // setw() 공백 사용 함수
using namespace std;

int main() {

	ofstream fout("address.txt");

	if (!fout) {
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	char name[20], addr[50];
	cin >> name >> addr;

	fout << name << " " << addr;

	return 0;
}