#include<iostream>
using namespace std;

void subFuncA() {

	int nVal = 10; 
	cout << "subFuncA::nVal = " << nVal << endl;
	nVal++;  // �Լ� ����� ���� ����, �׻� 10�� ������
}
void subFuncB() {

	static int nVal = 10;  //���� ������ �Լ��� ����Ǵ��� ���� ����Ѵ�
	cout << "subFuncA::nVal = " << nVal << endl;
	nVal++;
}
int main() {

	subFuncA();
	subFuncA();
	subFuncA();
	cout << "---------------------------" <<endl;
	subFuncB();
	subFuncB();
	subFuncB();

}