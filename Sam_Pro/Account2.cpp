#include<iostream>
using namespace std;

class Account {

public: // 구조체를 클래스로 바꿀 때 유의! 클래스는 기본이 private이다.
	char accID[20]; // 계좌번호
	char secID[20]; // 비밀번호
	char name[20];  // 이름
	int balance; // 잔액

	void Deposit(int money);
	void Withdraw(int money);
	void print();

};
void Account::Deposit(int money) { 
	balance += money;
	print();
}
void Account::Withdraw(int money) {
	balance -= money;
	print();
}
void Account::print() {

	cout << "계좌번호 : " << accID << endl;
	cout << "비밀번호 : " << secID << endl;
	cout << "이름 : " << name << endl;
	cout << "잔액 : " << balance << endl;
}

int main() {

	Account mirim = { "1234","1357","개나리",1000 };
	// mirim.print(); // 에러 예시 : 엑세스 할 수 없다. main에서 접근 할 수 없다는 뜻
	mirim.Deposit(100);
	mirim.Withdraw(300);

	return 0;

}
