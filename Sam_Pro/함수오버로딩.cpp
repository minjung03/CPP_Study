#include<iostream>
using namespace std;


// �츮�� ���⿡�� �� sum ������, ���������δ� �̸��� �ٸ�
// �Լ�/�޼ҵ� �����ε��� ������ ������ "name mangling" �� �ϱ� �����̴�.

int sum(int a, int b) { // ���������� �̸��� sumii
 	int sum;
	sum = a + b;
	return sum;
}

// ����Ÿ���� �߿����� ����. �Ű������� �޶���Ѵ�.(Ÿ��, ����, ���� ��)
double sum(double a, double b) {  // ���������� �̸��� sumdd
	double sum;
	sum = a + b;
	return sum;
}

int sum(int a = 3, int b = 5, int c = 4) { // ����Ʈ �Ű� ����
	int sum;
	sum = a + b + c;
	return sum;
}


int main() {

	cout << sum() << endl;
	cout << sum(2, 3) << endl;
	cout << sum(2.2, 3.3) << endl;
}
