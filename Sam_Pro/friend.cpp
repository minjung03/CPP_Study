#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Counter {
private:
	int val;

public:

	Counter() {
		val = 0;
		cout << "������" << endl;
	}
	void Print() {
		cout << val << endl;
	}
	friend void setX(Counter& c, int val); // �����Լ��� private�� ���� �����ϰ� ����
};

void setX(Counter& c, int val) { // &�� ���� call by value��. ��ü�� �� �ϳ� �������.
	c.val = val; 
}

int main() {
	Counter cnt;
	cnt.Print();

	setX(cnt, 2002);
	cnt.Print();

	return 0;
}