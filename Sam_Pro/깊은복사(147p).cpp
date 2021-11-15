#include<iostream>
#include<cstring>
using namespace std;

class MyData {

public :

	MyData(int nParam) {
		m_pnData = new int;
		*m_pnData = nParam;
	}
	MyData(const MyData& rhs) {
		cout << "CMDyata(const MyData &)" << endl;
		m_pnData = new int;
		*m_pnData = *rhs.m_pnData;
	}
	~MyData() {
		delete m_pnData;
	}

	/*
	int GetData(){
		if (m_pnData != NULL) return *m_pnData;
		return 0;
	} 
	*/

public :

	int* m_pnData = nullptr;

};

int main() {

	MyData a(10);
	MyData b(a);

	cout << *(a.m_pnData) << endl;
	cout << *(b.m_pnData) << endl;


	MyData *c = new MyData(20); // *c가 객체가 되는 것!!
	MyData *d = new MyData(*c); // 동적으로 객체를 만들면 heap영역에 들어간다.

	cout << *(c->m_pnData) << endl; // *((*c).m_pnData) 과 같은 의미
	cout << *(d->m_pnData) << endl;

	
	return 0;
}