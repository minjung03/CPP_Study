#include <iostream>
using namespace std;

//완전 수 : 약수들 중 자기 자신을 뺀 수의 합들이 자기 자신인 수
int main() {

	int sum;
	cout << "완전 수 : ";

	for (int i = 1; i <= 1000; i++) {
		sum = 0;

		for (int cnt = 1; cnt < i; cnt++) {

			if (i % cnt == 0) {
				sum += cnt;
			}
			
		}
		if (sum == i) {
			cout << sum << "  ";
		}
		 
	}

}
