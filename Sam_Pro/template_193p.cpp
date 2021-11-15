#include<iostream>
using namespace std;

// ������Ÿ��
template <class TT>
void swapTest(TT&, TT&);

template <class TT>
void swapTest(TT*, TT*, int);  // �迭 ������� ������ int ���̴� ���. �׸��� ��ȭ�� ������ �͸� ���ø� Ÿ������ ���!

template <class TT>
void printData(TT&);

int main() {

	int x = 10, y = 20;
	double x1 = 10.23, y1 = 20.56;

	cout << "x = " << x << ", y = " << y << endl;
	swapTest<int>(x,y);
	cout << "x = " << x << ", y = " << y << endl;

	cout << "x1 = " << x1 << ", y1 = " << y1 << endl;
	swapTest<double>(x1, y1);
	cout << "x1 = " << x1 << ", y1 = " << y1 << endl;

	//int a[5] = {1,2,3,4,5};
	//int b[5] = {6,7,8,9,10};
 
	//cout << "a[] : ";
	//for (int i = 0; i < 5; i++) {
	//	cout << a[i] << " ";
	//}
	//cout << endl;

	//cout << "b[] : ";
	//for (int i = 0; i < 5; i++) {
	//	cout << b[i] << " ";
	//}
	//cout << endl;

	//swapTest<int>(a, b, 5);

	//cout << "a[] : ";
	//for (int i = 0; i < 5; i++) {
	//	cout << a[i] << " ";
	//}
	//cout << endl;

	//cout << "b[] : ";
	//for (int i = 0; i < 5; i++) {
	//	cout << b[i] << " ";
	//}


	double a[5] = { 1.3, 2.5, 3, 4.2, 5 };
	double b[5] = { 6.7,7.1,8,9.3,10 };

	cout << "a[] : ";
	printData(a);

	cout << "b[] : ";
	printData(b);

	swapTest(a, b, 5);

	cout << "a[] : ";
	printData(a);

	cout << "b[] : ";
	printData(b);

	return 0;
}


template <class TT>
void swapTest(TT& x, TT& y) {
	TT temp;
	temp = x;
	x = y;
	y = temp;
}

// ���ø��� �����ε��� �����ϴ�.
// ��κ��� �����ε��� �ϱ� ����� �̷��� ����/�迭 ������ �Ű� ���� ������ ���� ���̳� �� �����ε��� ���ȴ�.
template <class TT>
void swapTest(TT* x, TT* y, int n) {  // �迭 ������� ������ int ���̴� ���. �׸��� ��ȭ�� ������ �͸� ���ø� Ÿ������ ���!
	TT temp;
	for (int i = 0; i < n; i++) { 
		temp = x[i];
		x[i] = y[i];
		y[i] = temp;
	}
}

template <class TT>
void printData(TT& a) {
	for (int i = 0; i < sizeof(a)/sizeof(a[0]); i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}