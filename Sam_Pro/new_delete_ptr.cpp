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
	TestC* ptr = new TestC[3]; // ������ ȣ�� 3��

	cout << "Test Cplus" << endl;
	delete[] ptr; // �Ҹ��� ȣ�� 3��

	cout << "End" << endl;

	return 0;
}