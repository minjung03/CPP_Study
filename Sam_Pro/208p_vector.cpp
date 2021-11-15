#include<iostream>
#include<vector> // include 꼭!!!
using namespace std;

int main() {
	vector<int> v;

	v.push_back(100);
	v.push_back(200);
	v.push_back(300);

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;

	v[0] = 123;
	int n = v[2];
	v.at(2) = 500; // 2번방 요소를 500으로 변경

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << " ";
	}
	cout << endl;


	return 0;
}