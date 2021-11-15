#include<iostream>
using namespace std;

template <class T>
class A_Class {
	T value;

public:
	A_Class() {}
	void setValue(T val) {
		value = val;
	}
	T getValue() {
		return value;
	}
};

int main() {

	A_Class<int> a1;
	a1.setValue(123);
	cout << a1.getValue() << endl;

	A_Class<double> a2;
	a2.setValue(123.456);
	cout << a2.getValue() << endl;
	
	return 0;
}