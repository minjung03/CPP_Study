#include<iostream>
using namespace std;

template <typename T>
class MyData {
	T nData;

public:
	MyData(T t): nData(t) {

	}
	void print() {
		cout << nData << ", ";
	}
};


template <>
class MyData<char*> {
	char* nData;

public:
	MyData(char* t) : nData(t) {

	}
	void print() {
		cout << "string value : " << nData << endl;
	}
};


void main() {
	int i = 3456;
	MyData<int> mydata1(i);

	char str[20] = "IT Meister";
	char* str1 = str;
	MyData<char*> mydata2(str1);

	mydata1.print();
	mydata2.print();
}