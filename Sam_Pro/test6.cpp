#include<iostream>
using namespace std;

int sum(int, int);

int main() {

	cout << sum(2, 3) << endl;
}
int sum(int a, int b) {
	int sum;
	sum = a + b;
	return sum, a, b; // 결과는 나오지만 제일 마지막 값만 출력된다.
	// 결국 오류인 셈!
}