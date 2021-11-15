#include <iostream>
using namespace std;

int main() {

	cout << "암스트롱수 : ";
	// 세 자리의 정수 중, 각 자릿수를 세 제곱하여 합한 수가 자신이 같은 수

	for (int i = 100; i <= 999; i++) {

		int num = pow(i / 100, 3) + pow((i % 100) / 10, 3) + pow(i % 10, 3);
		// c/c++의 제곱 함수 'pow(제곱할 수 , 제곱 횟수)'  
		// pow()함수는 double 타입 ** 주의하기

		if (i == num) {
			cout << i << " ";
		}

	}
		
}
