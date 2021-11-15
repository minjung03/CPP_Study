#include<iostream>
using namespace std;

template <typename T1, typename T2>
class Box {
	T1 data1;
	T2 data2;

public:
	Box(){}
	T1 getFirst();
	T2 getSecond();
	void setFirst(T1 value) {
		data1 = value;
	}
	void setSecond(T2 value) {
		data2 = value;
	}
};

template <typename T1, typename T2>
T1 Box<T1, T2>::getFirst() {
	return data1;
}
template <typename T1, typename T2>
T2 Box<T1, T2>::getSecond() {
	return data2;
}

int main() {

	Box<int, double> b;
	b.setFirst(100);
	b.setSecond(5.67);
	cout << "(" << b.getFirst() << ", " << b.getSecond() << ")" << endl;

	Box<int, int> b1;
	b1.setFirst(10);
	b1.setSecond(50);
	cout << "(" << b1.getFirst() << ", " << b1.getSecond() << ")";

	return 0;
}