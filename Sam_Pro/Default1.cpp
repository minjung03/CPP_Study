#include<iostream>
using namespace std;

class A {

public:

	A(int a) {};
	A() = default; // �̷��� �ۼ��ϸ� ����Ʈ �����ڶ�°� �� ��õ�
};
int main() {

	A a; // �⺻������ ȣ��

	return 0;
}