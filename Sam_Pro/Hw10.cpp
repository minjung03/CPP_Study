
#include<iostream>
using namespace std;

// 1~ 50까지 5단위로 구간별 합을 구하는 프로그램
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