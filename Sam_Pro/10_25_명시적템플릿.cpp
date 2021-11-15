#include<iostream>
using namespace std;

class Job {
public:
	char name[40];
	double sal;
	int flor;
};

template <typename T>
void swapTest(T& a, T& b) {
	T temp;
	temp = a;
	a = b;
	b = temp;
}

template <>
void swapTest(Job& a , Job& b) {
	double temp1 = a.sal;
	int temp2 = a.flor;

	a.sal = b.sal;
	b.sal = temp1;

	a.flor = b.flor;
	b.flor = temp2;

}

int main() { 

	int i = 10, j = 20;
	cout << i << ", " << j << endl;
	swapTest(i, j);
	cout << i << ", " << j << endl;

	Job j1 = { "Mirim", 187.2, 7 }; // 초기값 주는 것..
	Job j2 = { "Meister", 200.5, 9 };

	cout << j1.name << " " << j1.sal << " " << j1.flor << endl;
	cout << j2.name << " " << j2.sal << " " << j2.flor << endl;

	swapTest(j1, j2);
	cout << endl;

	cout << j1.name << " " << j1.sal << " " << j1.flor << endl;
	cout << j2.name << " " << j2.sal << " " << j2.flor << endl;

	return 0;
}
