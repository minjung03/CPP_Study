#include<iostream>
#include<vector> // include 꼭!!!
using namespace std;

int main() {

	vector<int> v1, v2, v3, v4; // 이렇게 선언 가능1!

	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);

	cout << "v1 : ";
	for (auto& e : v1) { // 형태 잘 보기!
		cout << e << " ";
	}
	cout << endl;

	v2.assign(v1.begin()+3, v1.end()); // ()안 범위 내 값을 넣는다
	cout << "v2 : ";
	for (auto& e : v2) { // 형태 잘 보기!
		cout << e << " ";
	}
	cout << endl;

	v3.assign(5,2); // 개수, 세팅 값 ** 2의 값으로 5개의 데이터 세팅
	cout << "v3 : ";
	for (auto& e : v3) { // 형태 잘 보기!
		cout << e << " ";
	}
	cout << endl;

	v4.assign({5,6,7}); // 초기값을 이렇게 줘도 ok
	cout << "v4 : ";
	for (auto& e : v4) { // 형태 잘 보기!
		cout << e << " ";
	}
	cout << endl;

	return 0;
}