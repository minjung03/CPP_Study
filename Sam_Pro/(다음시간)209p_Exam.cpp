#include<iostream>
#include<vector> // include ²À!!!
#include <string>
using namespace std;

int main(void) {

	vector<string> v1;

	v1.push_back("Mirim");
	v1.push_back("Meister");
	v1.push_back("IT_Science");

	for (auto e : v1) {
		cout << "  " << e;
	}
	cout << endl;


	return 0;
}
