#include<iostream>
using namespace std;


class Car {

	int ton, price;

protected:  

	static int count; // 정적 멤버 변수

public:

	Car() {
		ton = 0; price = 1000; count++;
	}
	Car(int ton, int price) {
		this->ton = ton; this->price = price; count++;
	}
	static int GetCount() { //정적 멤버 함수
		return count;
	}
	~Car() {
		cout << count << " 소멸"<<  endl;
		count--;
	}
};

//static int Car::count = 0; // 에러**** 주의!! static은 클래스 안에서 정의할 때만 사용!!!
int Car::count = 0;

int main() {

	// cout << "생성된 자동차의 수 : " << Car::count << endl; // 생성된 객체로 불러도 괜찮지만, 객체가 없는 상태에서는 클래스 이름:: 으로 불러야 한다.
																// 객체가 생성된 이후로는 어떤 객체를 사용해도 상관이 없다. 공용된 부분이니.

	Car car1;
	//cout << "생성된 자동차의 수 : " << car1.GetCount() << endl; 
	cout << "생성된 자동차의 수 : " << car1.count << endl; // protected 는 상속 관계에서만 접근 가능한 접근 제한자이니 오류!

	Car car2(10,3000);
	cout << "생성된 자동차의 수 : " << car2.GetCount() << endl;

	return 0;
}