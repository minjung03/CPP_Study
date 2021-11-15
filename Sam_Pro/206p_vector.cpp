#include<iostream>
#include<vector>
using namespace std;

int main() {

	vector<int> v;

	v.push_back(11);
	v.push_back(22);
	v.push_back(33);
	v.push_back(44);
	v.push_back(55);

	cout << "v = ";
	for (auto& e : v) {
		cout << e << " ";
	}
	cout << endl;

	v.pop_back(); // 맨 뒤 요소 하나 빼기
	v.pop_back(); // 맨 뒤 요소 하나 빼기

	cout << "v = ";
	for (auto& e : v) {
		cout << e << " ";
	}
	cout << endl;



	return 0;
}