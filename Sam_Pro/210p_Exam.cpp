#include<iostream>
#include<vector> // include 꼭!!!
#include <string>
#include<algorithm>
using namespace std;

void Show(const int &item) { // cout 밖에 없으면(단순히 출력만 하는 경우) 매개변수에 const를 붙여 받아오는 경우가 많다.
	cout << item << " ";
}

int main() {

	vector<int>	v;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);


	vector<int>::iterator ptr1;
	for (ptr1 = v.begin(); ptr1 != v.end(); ptr1++) {
		Show(*ptr1);
	}
	cout << endl;

	for (auto ptr2 = v.begin(); ptr2 != v.end(); ptr2++) {
		Show(*ptr2);
	}
	cout << endl;

	for (auto& ptr3 : v) {
		Show(ptr3);
	}
	cout << endl;


	for_each(v.begin()+2, v.end(), Show);

	return 0;


}