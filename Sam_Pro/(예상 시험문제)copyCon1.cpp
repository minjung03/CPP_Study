#include<iostream>
using namespace std;

class AAA {

public:
	AAA() {
		cout << "AAA 호출" << endl;

	}
	AAA(int i) {
		cout << "AAA(int i) 호출" << endl;
	}

	AAA(const AAA& a) { // &를 안쓰면 복사생성자가 잘못된다 오류뜬다. 꼭 const 와 & 잘 쓰기
		// 이런데에서 시험문제 나오기도 함**
		cout << "AAA(const AAA& a) 호출" << endl;
	}
	void ShowData() {
		cout << "ShowData()" << endl;
	}
};

void function(AAA a) { // 매개변수로 받은 a에 &가 없어서 따로 만들어지게 된다. AAA(const AAA& a)를 다시 호출
	a.ShowData();	   // AAA& a가 된다면 한번 더 호출하지 않는다. 별명으로 따로 붙게되니.
};

int main(void) {
	AAA obj1;
	AAA obj2(10);
	AAA obj3(obj2);
	function(obj1);
}