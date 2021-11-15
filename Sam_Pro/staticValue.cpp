#include<iostream>
using namespace std;

void subFuncA() {

	int nVal = 10; 
	cout << "subFuncA::nVal = " << nVal << endl;
	nVal++;  // 함수 종료시 변수 제거, 항상 10이 찍힌다
}
void subFuncB() {

	static int nVal = 10;  //정적 변수는 함수가 종료되더라도 값을 기억한다
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