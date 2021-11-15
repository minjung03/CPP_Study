#include<iostream>
using namespace std;

template <typename T>
T add(T a, T b) {
	return a + b;
}

int main() {

	cout << add(3,5) << endl;

	// 이 두 부분에 대해서는 명시적 템플릿으로 적어야한다!
	cout << add('a', 'b') << endl;
	//cout << add("school", "Mirim") << endl;

	return 0;
}