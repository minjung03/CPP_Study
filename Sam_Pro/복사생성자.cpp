#include<iostream>
using namespace std;

class MyPerson {
public:
	MyPerson() { cout << "MyPerson()" << endl; }

	MyPerson(const MyPerson& rhs) /* : nAge(rhs.nage) */ {
		this->nAge = rhs.nAge;
		cout << "MyPerson(const MyPerson& rhs)" << endl;
	}
	int getData(void) const { return nAge; }
	void setData(int nData) { nAge = nData; }

private :
	int nAge = 0;
};

int main() {
	MyPerson p1;
	p1.setData(20);

	MyPerson p2(p1);
	cout << "PersonÀÇ ³ªÀÌ : " << p2.getData() << endl;

	return 0;
}