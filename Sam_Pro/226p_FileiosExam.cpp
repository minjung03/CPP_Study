#include<iostream>
#include <fstream>
#include <iomanip> // setw() 공백 사용 함수
using namespace std;

int main() {

	ofstream fout("sample.txt", ios::app);

	if (!fout) {
		cerr << "파일 오픈 실패" << endl;
		exit(1);
	}
	else {
		fout << "append line 1" << endl;
	}


	return 0;
}