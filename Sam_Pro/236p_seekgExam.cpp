#include<iostream>
#include<fstream>
using namespace std;

int main() {
	const char* file = "sample.txt";


	ifstream fin(file);

	if (!fin) {
		cout << file << "열기 오류" << endl;
		return 0;
	}

	fin.seekg(0, ios::end);

	cout << file << "의 크기는 " << fin.tellg() << endl;

	fin.close();

	return 0;
}