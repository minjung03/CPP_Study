#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Counter {
private:
	int val;

public:

	Counter() {
		val = 0;
		cout << "생성자" << endl;
	}
	void Print() {
		cout << val << endl;
	}
	friend void setX(Counter& c, int val); // 전역함수가 private에 접근 가능하게 해줌
};

void setX(Counter& c, int val) { // &가 없음 call by value다. 객체가 또 하나 만들어짐.
	c.val = val; 
}

int main() {
	Counter cnt;
	cnt.Print();

	setX(cnt, 2002);
	cnt.Print();

	return 0;
}