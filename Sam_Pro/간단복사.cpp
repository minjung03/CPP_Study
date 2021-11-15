#include<iostream>
using namespace std;

class AAA {
	int val;

public : 
	AAA(int n) {
		val = n;
	}

	c
};

int main(void) {

	AAA a1(10); // 이렇게도 값 대입이 가능하다
	a1.ShowData();

	AAA a2 = 20;
	a2.ShowData();
}