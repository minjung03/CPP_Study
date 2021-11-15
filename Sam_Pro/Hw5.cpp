#include<iostream>
using namespace std;

// 10진수를 2진수로 출력하는 프로그램
int main(){

	int num, i;
	int binary[8]; 

	cout << "10진수 입력 : ";
	cin >> num;

	for (i = 0; i < 8; i++) {

		binary[i] = num % 2;
		num = num / 2;

		if (num == 0) {
			break;
		}

	}
	for (int j = i; j >= 0; j--) {
		cout << binary[j] ;
	}
}