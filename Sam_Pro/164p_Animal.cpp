#include<iostream>
#include <string>
using namespace std;

class Animal {
	string name = "";
	int weight = 0;

public: 
	// Animal() { cout << "Animal 생성자()" << endl; }

	Animal(string name, int weight) {
		this->name = name;
		this->weight = weight;
		cout << "Animal 매개변수 생성자()" << endl;
	}

	~Animal() {
		cout << "Animal 소멸자()" << endl;
	}

	/*
	string getName() {
		return name;
	}

	int getWeight() {
		return weight;
	}
	*/
	void print() {
		cout << name << " " << weight << " ";
	}
};
class Dog : public Animal {
	int height = 0;

public:

	// 명시적으로 호출하지 않을 시 기본 생성자 호출 하는데,,
	// 부모 클래스에 아예 생성자가 전부 없다 -> 문제 없음
	// 부모 클래스에 매개변수 생성자만 존재 한다 -> 문제 있음

	Dog(string name, int weight, int height) : Animal(name, weight) { 
		//  : Animal(name, weight) 부모 생성자 지정 호출    ***{ } 안에서 호출XX
		this->height = height;
		cout << "Dog 매개변수 생성자()" << endl;
	}

	// Dog() { cout << "Dog 생성자()" << endl; }

	~Dog() { cout << "Dog 소멸자()" << endl; }

	void print() {
		Animal::print(); // 부모 클래스 호출
		cout << height << endl;
		// 	cout << getName() << << getWeigth() << height<< endl;
	}
};

int main() {
	// Dog dog;

	Dog d1("강아지", 3, 50);
	d1.print();

	Animal a1("동물", 1000);
	a1.print();

	return 0;
}