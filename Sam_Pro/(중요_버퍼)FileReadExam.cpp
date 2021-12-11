#include<iostream>
#include<fstream>
using namespace std;

int main() {

	// 아주 간단한 복사 프로그램

	ifstream src("FileExam.cpp", ios::in | ios::binary); // cpp 내용도 전부 들어간다
	// 복사 할 때는 꼭 | ios::binary 해주기** 한자 이런 거 작성할 때 깨질 수도 있어서
	ofstream tar("target.txt", ios::out | ios::binary | ios::trunc); 
	// | ios::trunc 출력 파일이 이미 존재할 시 기존에 있는 출력 파일을 지우고 다시 작성

	char szBuffer[1024];
	int nRead;

	for (;;) {
		src.read(szBuffer, 1024);
		nRead = src.gcount();
		tar.write(szBuffer, 1024);
		// tar.write(szBuffer, 1024); 라고 작성하게 되면 1024를 전부 읽어야하니 뒤에 쓰레기 값이 나온다. 
		// 그래서 nRead가 필요한 것. 읽은 만큼만 출력하게 해야한다
		
		if(nRead == 0) break; // 꼭 작성!
	}

	src.close();
	tar.close();

	return 0;
}