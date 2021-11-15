#include<iostream>
using namespace std;

class MyPerson {
public:
	MyPerson(int nParam) : nAge(nParam) { cout << "MyPerson()" << endl; }

	// 복사 생성자 정의 및 선언
	MyPerson(const MyPerson& rhs): nAge(rhs.nAge) {
		cout << "MyPerson(const MyPerson& rhs)" << endl;
	}
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }

private:
	int nAge = 0;
};

void TestFunc(MyPerson &param) { // 콜 바이 레퍼런스(&)로 주어야 한다!
	cout << "TestFunc()" << endl;
	param.setData(50);
}

int main() {
	cout << "*****Begin*****" << endl;
	MyPerson p1(30);
	TestFunc(p1);

	cout << "p1 : " << p1.getData() << endl;
	cout << "******End******" << endl;

	return 0;
}