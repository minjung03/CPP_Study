//2102 김민정
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;

const char* file = "data.txt";
int bslist[5] = { 230,210,190,170,150 };

class Employee {
protected: // 상속타입이니 아들쪽에서 사용가능
	char* empNo;
	char* name;
	char basicSalary;

public:
	Employee(char* id, char* name, char sal) {
		this->empNo = new char[strlen(id) + 1];
		strcpy(this->empNo, id);
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->basicSalary = sal;
	}
	char* getEmpNo() {
		return this->empNo;
	}
	virtual void print() {}
};

class Manager : public Employee {
	int managePay;
public:
	Manager(char* id, char* name, char sal, int addM) : Employee(id, name, sal) {
		this->managePay = addM;
	}
	void print() {
		int bs = bslist[basicSalary - 'A'];
		cout << empNo << "\t" << name << "\t" << bs << "\t" << managePay << "\t\t" << bs + managePay << endl;
	}
};

class SalesMan : public Employee {
	int salesPay;
public:
	SalesMan(char* id, char* name, char sal, int addM) : Employee(id, name, sal) {
		this->salesPay = addM;
	}
	void print() {
		int bs = bslist[basicSalary - 'A'];
		cout << empNo << "\t" << name << "\t" << bs << "\t" << salesPay << "\t\t" << bs + salesPay << endl;
	}
};

class Temporary : public Employee {
	int bonusPay;
	int year;
public:

	Temporary(char* id, char* name, char sal, int addM, int lime) : Employee(id, name, sal) {
		this->bonusPay = addM;
		this->year = lime;
	}
	void print() {
		int bs = bslist[basicSalary - 'A'];
		cout << empNo << "\t" << name << "\t" << bs << "\t" << bonusPay << "\t\t" << bs + bonusPay << "\t\t( " << year << ")" << endl;
	}
};


int main() {

	ifstream fin(file);
	int line = 1; // 마지막줄을 인식을 안해서 초기값을 1로 준 것
	char ch;

	while (!fin.eof()) {
		fin.get(ch);
		if (ch == '\n') line++;
	}
	// 파일 커서 맨 앞으로 다시 돌리기
	fin.clear();
	fin.seekg(0, ios::beg);

	vector<Employee*> emp(line);

	char id[20];
	char name[20];
	char a;
	int b;
	int c;

	int index = 0;

	while (fin >> id >> name >> a >> b >> c) {
		switch (id[2]) {
		case 'R': {

			switch (id[3]) {
			case 'M': {
				emp[index] = new Manager(id, name, a, b);
				break;
			}
			case 'S': {
				emp[index] = new SalesMan(id, name, a, b);
				break;
			}
			}
			break;
		}
		case 'T': {
			emp[index] = new Temporary(id, name, a, b, c);
			break;
		}
		}
		index++;
	}


	cout << "Manager****************************************************************************************" << endl;
	cout << "사번\t이 름\t기본급\t관리수당\t총수령액" << endl;
	cout << "***********************************************************************************************" << endl;
	for (auto& e : emp) {
		if ((e->getEmpNo())[2] == 'R' && (e->getEmpNo())[3] == 'M') {
			e->print();
		}
	}
	cout << "***********************************************************************************************" << endl;

	cout << "SalesMan***************************************************************************************" << endl;
	cout << "사번\t이 름\t기본급\t영업수당\t총수령액" << endl;
	cout << "***********************************************************************************************" << endl;
	for (auto& e : emp) {
		if ((e->getEmpNo())[2] == 'R' && (e->getEmpNo())[3] == 'S') {
			e->print();
		}
	}
	cout << "***********************************************************************************************" << endl;

	cout << "Temporary**************************************************************************************" << endl;
	cout << "사번\t이 름\t기본급\t임시수당\t총수령액\t계약기간" << endl;
	cout << "***********************************************************************************************" << endl;
	for (auto& e : emp) {
		if ((e->getEmpNo())[2] == 'T' && (e->getEmpNo())[3] == 'E') {
			e->print();
		}
	}
	cout << "***********************************************************************************************" << endl;


	fin.close();

	return 0;
}