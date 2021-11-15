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

	MyData<int> mydata1; // �ݵ�� Ÿ�� ���***
	MyData<double> mydata2;

	mydata1.SetData(5);
	cout << mydata1.GetData() << " ";

	mydata2.SetData(5.1);
	cout << mydata2.GetData() << " ";
}

template <class T>
void MyData<T>::SetData(T pdata) {  // �Լ� �̸� �տ� ���� - ����<Ÿ�Գ���>::
	mydata = pdata;
}

template <class T>
T MyData<T>::GetData() {
	return mydata;
}