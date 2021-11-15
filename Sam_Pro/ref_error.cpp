#include<iostream>
using namespace std;

int& function(void) {

	int val = 10;
	return val;
};

int main(void) {

	int& ref = function(); // 함수도 실체가 있는 것이라 보아 정상적로 리턴 10을 받는다.
	cout << ref << endl;
	
	return 0;
}