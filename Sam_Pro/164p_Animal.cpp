#include<iostream>
#include <string>
using namespace std;

class Animal {
	string name = "";
	int weight = 0;

public: 
	// Animal() { cout << "Animal ������()" << endl; }

	Animal(string name, int weight) {
		this->name = name;
		this->weight = weight;
		cout << "Animal �Ű����� ������()" << endl;
	}

	~Animal() {
		cout << "Animal �Ҹ���()" << endl;
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

	// ��������� ȣ������ ���� �� �⺻ ������ ȣ�� �ϴµ�,,
	// �θ� Ŭ������ �ƿ� �����ڰ� ���� ���� -> ���� ����
	// �θ� Ŭ������ �Ű����� �����ڸ� ���� �Ѵ� -> ���� ����

	Dog(string name, int weight, int height) : Animal(name, weight) { 
		//  : Animal(name, weight) �θ� ������ ���� ȣ��    ***{ } �ȿ��� ȣ��XX
		this->height = height;
		cout << "Dog �Ű����� ������()" << endl;
	}

	// Dog() { cout << "Dog ������()" << endl; }

	~Dog() { cout << "Dog �Ҹ���()" << endl; }

	void print() {
		Animal::print(); // �θ� Ŭ���� ȣ��
		cout << height << endl;
		// 	cout << getName() << << getWeigth() << height<< endl;
	}
};

int main() {
	// Dog dog;

	Dog d1("������", 3, 50);
	d1.print();

	Animal a1("����", 1000);
	a1.print();

	return 0;
}