#include<iostream>
using namespace std;


// 우리가 보기에는 다 sum 이지만, 내부적으로는 이름이 다름
// 함수/메소드 오버로딩이 가능한 이유는 "name mangling" 을 하기 때문이다.

int sum(int a, int b) { // 내부적으로 이름이 sumii
 	int sum;
	sum = a + b;
	return sum;
}

// 리턴타입은 중요하지 않음. 매개변수가 달라야한다.(타입, 순서, 갯수 등)
double sum(double a, double b) {  // 내부적으로 이름이 sumdd
	double sum;
	sum = a + b;
	return sum;
}

int sum(int a = 3, int b = 5, int c = 4) { // 디폴트 매개 변수
	int sum;
	sum = a + b + c;
	return sum;
}


int main() {

	cout << sum() << endl;
	cout << sum(2, 3) << endl;
	cout << sum(2.2, 3.3) << endl;
}
