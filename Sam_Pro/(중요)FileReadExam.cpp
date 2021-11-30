#include<iostream>
#include<fstream>
using namespace std;

int main() {

	// ���� ������ ���� ���α׷�

	ifstream src("FileExam.cpp", ios::in | ios::binary); // cpp ���뵵 ���� ����
	// ���� �� ���� �� | ios::binary ���ֱ�** ���� �̷� �� �ۼ��� �� ���� ���� �־
	ofstream tar("target.txt", ios::out | ios::binary | ios::trunc); 
	// | ios::trunc ��� ������ �̹� ������ �� ������ �ִ� ��� ������ ����� �ٽ� �ۼ�

	char szBuffer[1024];
	int nRead;

	for (;;) {
		src.read(szBuffer, 1024);
		nRead = src.gcount();
		tar.write(szBuffer, 1024);
		// tar.write(szBuffer, 1024); ��� �ۼ��ϰ� �Ǹ� 1024�� ���� �о���ϴ� �ڿ� ������ ���� ���´�. 
		// �׷��� nRead�� �ʿ��� ��. ���� ��ŭ�� ����ϰ� �ؾ��Ѵ�
		
		if(nRead == 0) break; // �� �ۼ�!
	}

	src.close();
	tar.close();

	return 0;
}