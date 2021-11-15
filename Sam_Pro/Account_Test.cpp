#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// 수행평가 이렇게 본다...
// 정말 열심히 공부하기

class CBank {
private:

	string name;
	string account;
	int balance;
	static int cnt;

public:

	// 생성자 작성
	CBank() { 

		this->name = "";
		this->account = "";
		this->balance = 0;
	}

	CBank(string name , string account, int balance){

		this->name = name;
		this->account = account;
		this->balance = balance;
		cout << "\n생성" << endl;
	}

	void deposit() {

		int money;
		cout << "입금 금액 : ";
		cin >> money;

		balance += money;
	}
	void withdraw() {

		int money;
		cout << "출금 금액 : ";
		cin >> money;

		balance -= money;
	}
	void refer() {
		cout << "\n예금주 : " << this->name << endl;
		cout << "계좌번호 : " << this->account << endl;
		cout << "잔액 : " << this->balance << endl;
	}

	void account_create() { // 계좌 생성

		string name_, account_no;
		int  balance_money = 0;

		cout << "\n이름 : ";
		cin >> name_;
		cout << "계좌번호 : ";
		cin >> account_no;
		cout << "입금 금액 : ";
		cin >> balance_money;
		
		this->name = name_;
		this->account = account_no;
		this->balance = balance_money;
		this->refer();
		cnt++;
	}
	static int getCnt() {
		return cnt;
	}

	string getAccount() {
		return account;
	}
	string getName() {
		return name;
	}
	int getBalance() {
		return balance;
	}

	// 소멸자
	~CBank() {
		cout << this->account << " 소멸" << endl;
		this->balance = -1;
	}
};
CBank* cb[10]; // 전역 변수로 생성
int CBank::cnt = 0; // 정적 멤버 변수의 초기값은 이렇게 준다*****

int search() {

	string account_no;
	cout << "\n계좌번호 : ";
	cin >> account_no;

	// 계좌 조회 (찾은 후, delete)
	for (int i = 0; i < CBank::getCnt(); i++) {
		if (account_no == cb[i]->getAccount()) {
			cout << account_no <<" " <<cb[i]->getAccount() << endl;
			return i;
		}
	}
	return -1;
}

void ALL_search() {
	for (int i = 0; i < CBank::getCnt(); i++) {
		if (cb[i] != nullptr) {
			cout << cb[i]->getName() << " " << cb[i]->getAccount() << " " << cb[i]->getBalance() << endl;
		}
		
	}
}
int main() {

	int menu;
	string account_no;

	while (1) {

		cout << "\n1. 계좌생성 " << endl;
		cout << "2. 입금" << endl;
		cout << "3. 출금 " << endl;
		cout << "4. 잔액조회" << endl;
		cout << "5. 계좌해지" << endl;
		cout << "6. 전체 계좌조회" << endl;
		cout << "0. 종료" << endl;
		cout << " 메뉴 선택 ==> ";

		cin >> menu;

		int tmp_cnt = 0;
		int se_loc;

		switch (menu) {

			case 1: 
				tmp_cnt = CBank::getCnt();
				cb[tmp_cnt] = new CBank(); // 중간중간 삭제가 가능해야하니 동적 할당
				cb[tmp_cnt]->account_create(); break; 
			
			case 2: // 입금
				se_loc = search();
				if (se_loc != -1) {
					cb[se_loc]->deposit();
				}
				else {
					cout << "계좌번호 오류" << endl;
				}
				break;

			case 3: // 출금
				se_loc = search();
				if (se_loc != -1) {
					cb[se_loc]->withdraw();
				}
				else {
					cout << "계좌번호 오류" << endl;
				}
				 break;

			case 4: // 조회
				se_loc = search();
				if (se_loc != -1) {
					cb[se_loc]->refer();
				}
				else {
					cout << "계좌번호 오류" << endl;
				}
				 break;

			case 5: 
				se_loc = search();
				if (se_loc != -1) {
					cb[se_loc] = nullptr;
					delete cb[se_loc];
				}
				cout << "계좌번호 오류" << endl;			
				break;

			case 6:
				ALL_search(); break;

			case 0: return 0;
		}

	}

	return 0;
}

