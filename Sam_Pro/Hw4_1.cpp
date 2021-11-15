#include <iostream>
using namespace std;

int main() {


		int num;
		char ap;

		cout << "1 ~ 입력한 숫자까지 출력합니다 : ";
		cin >> num;

		cout << "입력 : ";
		cin >> ap;

		while (ap != 'c') {
			cout << "다시 입력 : ";
			cin >> ap;

		}
		for (int i = 1; i <= num; i++) {
			cout << i << " ";
		}

	}
 
