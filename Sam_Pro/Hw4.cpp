#include <iostream>
using namespace std;

int main() {

	char ap;

	cout << "입력 : ";
	cin >> ap;

	while (ap != 'z') {
		cout << "다시 입력 : "; 
		cin >> ap;
		
	}
	for (int i = 1; i <= 15; i++) {
		cout << i << " ";
	}

}