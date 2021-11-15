#include<iostream>
using namespace std;

//계좌
struct Account {

	// 멤버 변수
	char accID[20]; // 계좌번호
	char secID[20]; // 비밀번호
	char name[20];  // 이름
	int balance; // 잔액

	void Deposit(int money);
	void Withdraw(int money);
	void print();

};
void Account::Deposit(int money) { // 프로토타입을 사용. 밑에 써도 상관없다.
	balance += money;
	print();
}
void Account::Withdraw(int money) {
	balance -= money;
	print();
}
/* C에서의 방법 : 매개변수로 소속을 나타낸다
void Deposit(Account &acc, int money) { // 콜 바이 레퍼런스(call by reference)
	acc.balance += money; // mirim 계좌에 대한 balance이니 mirim이 넘어온 acc를 앞에 적는다.
}
void Withdraw(Account& acc, int money) { 
	acc.balance -= money;
}
*/
int main() {

	Account mirim = { "1234","1357","개나리",1000 };

	/* C에서의 방법
	Deposit(mirim, 100); // 입금시키는 함수
	cout << "잔액 : " << mirim.balance << endl;

	Withdraw(mirim, 300); // 출금시키는 함수
	cout << "잔액 : " << mirim.balance << endl;

	// 잔액이 변하지 않는다 왜? 매개변수를 넘기는 방법이 "콜 바이 밸류"라 값을 다 버리고 와서 결정적으로 값이 바뀌지를 않는다.
	// 콜 바이 포인터나 레퍼런스로 바꿔줘야함.(레퍼런스로 수정)
	*/

	mirim.Deposit(100);
	mirim.Withdraw(300);
 
	return 0;

}
void Account::print() {

	cout << "계좌번호 : " << accID << endl;
	cout << "비밀번호 : " << secID << endl;
	cout << "이름 : " << name << endl;
	cout << "잔액 : " << balance << endl;
}

// 콜 바이 포인터 방법
/*
void Deposit(Account* acc, int money) {
	(*acc).balance += money; 
}
void Withdraw(Account* acc, int money) {
	acc->balance -= money;
}

Deposit(&mirim, 100); // 입금시키는 함수
cout << "잔액 : " << mirim.balance << endl;

Withdraw(&mirim, 300); // 출금시키는 함수
*/