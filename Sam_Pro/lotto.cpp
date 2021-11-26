#include<iostream>
#include<vector> // include ²À!!!
#include <string>
#include<algorithm>
using namespace std;

int main() {

	srand(time(NULL));

	 for (int k = 0; k < 100; k++) {
		vector<int> lotto;

		for (int i = 0; i < 6; i++) {
			int num = rand() % 7 + 1;
			lotto.push_back(num);

			for (int j = 0; j < lotto.size(); j++) {
				if (lotto[i] == lotto[j]) {
					lotto.pop_back();
					i--;
				}
			}

		}
		for (int i = 0; i < 6; i++) cout << lotto[i] << " ";
		cout << endl;
	 }

	return 0;
}