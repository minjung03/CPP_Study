#include<iostream>
using namespace std;

template <class T>
class MyData {
private :
	T mydata;
public:
	void SetData(T);
	T GetData();
};

void main() {

	MyData<int> mydata1; // 반드시 타입 명시***
	MyData<double> mydata2;

	mydata1.SetData(5);
	cout << mydata1.GetData() << " ";

	mydata2.SetData(5.1);
	cout << mydata2.GetData() << " ";
}

template <class T>
void MyData<T>::SetData(T pdata) {  // 함수 이름 앞에 영역 - 영역<타입네임>::
	mydata = pdata;
}

template <class T>
T MyData<T>::GetData() {
	return mydata;
}