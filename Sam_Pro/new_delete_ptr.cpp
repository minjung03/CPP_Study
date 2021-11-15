#include<iostream>
using namespace std;


class TestC {
	int iData;

public:
	TestC()
	{
		cout << "TestC::TestC()" << endl;
	}

	~TestC()
	{
		cout << "TestC::TestC()" << endl;
	}
};

int main() {

	cout << "main begin" << endl;
	TestC* ptr = new TestC[3]; // 생성자 호출 3번

	cout << "Test Cplus" << endl;
	delete[] ptr; // 소멸자 호출 3번

	cout << "End" << endl;

	return 0;
}