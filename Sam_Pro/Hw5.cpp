#include<iostream>
using namespace std;

// 10������ 2������ ����ϴ� ���α׷�
int main(){

	int num, i;
	int binary[8]; 

	cout << "10���� �Է� : ";
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