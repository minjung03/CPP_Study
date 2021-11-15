#include<iostream>
using namespace std;

class A {

public:

	A(int a) {};
	A() = default; // 이렇게 작성하면 디폴트 생성자라는게 더 명시됨
};
int main() {

	A a; // 기본생성자 호출

	return 0;
}