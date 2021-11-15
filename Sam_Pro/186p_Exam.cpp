#include<iostream>
using namespace std;

class Animal {
public:
	virtual ~Animal() {}

	virtual void SoundSpeak() = 0;
	virtual void EatDiets(const char* eat) const = 0;
};


class Dog : public Animal {
public:

	int a;

	virtual void SoundSpeak() {
		cout << "개소리 멍멍  ";
	}
	virtual void EatDiets(const char* eat) const // 함수의 const를 제일 끝부분에 붙이면 내부에서 어떠한 값도 변경할 수 없다. 거의 출력만 하는 함수임.
	{
		// a = 5; - 에러난다 함수 끝부분에 const를 붙이면 안에서 어떠한 변수의 값도 변하게 할 수 없기 때문이다.
		cout << eat << endl;
	}
};

class Cat : public Animal {
public:
	virtual void SoundSpeak() {
		cout << "고양이 야옹  ";
	}
	virtual void EatDiets(const char* eat) const{
		cout << eat << endl;
	}
};

int main(void) {
	Dog dog;
	dog.SoundSpeak();
	dog.EatDiets("개 사료");

	Cat cat;
	cat.SoundSpeak();
	cat.EatDiets("고양이 사료");

	// Animal ani;
	// 순수 가상 클래스라 객체 생성 X

	return 0;
}