#include <iostream>
using namespace std;

//���� �� : ����� �� �ڱ� �ڽ��� �� ���� �յ��� �ڱ� �ڽ��� ��
int main() {

	int sum;
	cout << "���� �� : ";

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
