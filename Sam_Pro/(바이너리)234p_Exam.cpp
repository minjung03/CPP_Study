#include<iostream>
#include<fstream>
using namespace std;


void main() {

	int nArray[6] = { 0, };

	ifstream fi_bin("data.bin", ifstream::binary);

	if (!fi_bin) {
		cout << "data.bin 파일 오픈 에러" << endl;
		exit(1);
	}

	cout << "data.bin 파일 내용 출력 " << endl << endl;

	fi_bin.read((char*)&nArray, sizeof(nArray));

	for (auto& e : nArray) {
		cout << e << " ";
	}
}