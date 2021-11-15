#include <iostream>
using namespace std;

int main() {

	int i = 1;

	for (int j = 2; j <= 20; j++) {
		
		int sum = i + j;
		cout << i << " + " << j << " = " << sum << endl;
		i = sum;
	}

}