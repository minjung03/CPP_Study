#include<iostream>
using namespace std;


class AccessControl {

private:

	int a;
	void a1();
	AccessControl();

public:
	int b;
	AccessControl(int x);
	void b1();

};
AccessControl::AccessControl() {
	a = 1;
	b = 1;
}
AccessControl::AccessControl(int x) {
	a = x;
	b = x;
}
void AccessControl::a1() {
	a = 5;
	b = 5;
}
void AccessControl::a1() {
	a = 6;
	b = 6;
}

int main() {

	AccessControl objA; // �⺻�����ڰ� private�� ����
	AccessControl objB(100);
	objB.a = 10; 	// private�� ����

	objB.b = 20;

	objB.al(); // private�� ����

	objB.b1();

}