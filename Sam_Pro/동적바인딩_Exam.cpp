#include<iostream>
using namespace std;

int add(int x, int y) {
	return x + y;
}
int odd(int x, int y) {
	return x - y;
}
int mul(int x, int y) {
	return x * y;
}

int main(){

	int x, y, op;
	cin >> x;
	cin >> y;

	cout << "1. add 2. odd 3. mul" << endl;
	cin >> op;

	// 정적 바인딩 (뭐를 누르면 어디로 가는지 안다)
	/*
	int result;
	switch (op) {
		case 1: result = add(x, y); break;
		case 2: result = odd(x, y); break;
		case 3: result = mul(x, y); break;
	}

	cout << result << endl;
	*/


	// 동적 바인딩 (뭐를 눌렀는지에 따라 실행 중 결정된다)
	int (*func_ptr)(int, int) = nullptr; // 함수 포인터
	switch (op) {
		case 1: func_ptr = add; break;
		case 2: func_ptr = odd; break;
		case 3: func_ptr = mul; break;
	}

	cout << func_ptr(x,y) << endl; // 함수 호출, 실행 시 결정
}
