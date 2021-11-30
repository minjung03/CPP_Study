#include<iostream>
#include<fstream>
using namespace std;


int main() {
	ofstream fo_bin("data.bin", ofstream::binary);

	int nArray[] = { 100,200,300,400,500,600 };

	if (!fo_bin) {
		cout << "data.bin 파일 오픈 에러" << endl;
		exit(1);
	}

	fo_bin.write((char*)&nArray, sizeof(nArray));

	return 0;


}