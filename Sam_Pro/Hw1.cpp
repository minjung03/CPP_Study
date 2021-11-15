#include <iostream>
using namespace std;

int main() {

	char a;
	int cnt = 1;

	while (true) {

		cin >> a;

		if (a == 'a') {
			cout << "a : " << cnt++ << endl;
		}
		else break;
	}
}