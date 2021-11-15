#include <iostream>
using namespace std;

int main() {

	unsigned  a;
	unsigned  b;
	int sum = 0, cnt = 0;

	cout << "수 2개 입력(작은 수 큰 수) : ";
	cin >> a;
	cin >> b;

	cout << "구할 배수 : "<< a << endl;
	cout << "끝 값 : " << b << endl;
	cout << "0부터 " << b << "까지에 있는 " << a << "의 배수 : ";
	
	for (int i = 0; i <= b; i++) {
		
		if (i % a == 0) {
			cout << i << "  ";
			cnt++;
			sum += i;
		}
		
	}
	cout << endl;
	cout << "0부터 " << b << "까지에 있는 " << a << "의 배수의 갯수 : "<< cnt << "개" << endl;
	cout << "0부터 " << b << "까지에 있는 " << a << "의 배수의 합 : " << sum  << endl;
}