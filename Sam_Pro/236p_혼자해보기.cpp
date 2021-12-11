#include<iostream>
#include<fstream>
using namespace std;

void reverseReadFile(ifstream& fin){

	fin.seekg(0, ios::end);
	int length = fin.tellg();
	cout << length << endl;

	while (length > 0) {
		fin.seekg(--length, ios::beg);
		cout << (char)fin.get(); // get() �� ���ڽ� �������� �޼ҵ�
	}
}

int main() {
	

	ifstream fin("sample.txt");
	reverseReadFile(fin);


	return 0;
}