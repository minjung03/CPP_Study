
#include<iostream>
using namespace std;

// 1~ 50���� 5������ ������ ���� ���ϴ� ���α׷�
int main() {


	int sum = 0;

	for (int i = 1; i < 55; i++) {

		sum += i;

		if (i % 5 == 0) {
			
			cout << "1~" << i << " --> " << sum << endl;
		}
		
	}
	
	return 0;
}