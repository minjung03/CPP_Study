#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
using namespace std;

// ������ �̷��� ����...
// ���� ������ �����ϱ�

class CBank {
private:

	string name;
	string account;
	int balance;
	static int cnt;

public:

	// ������ �ۼ�
	CBank() { 

		this->name = "";
		this->account = "";
		this->balance = 0;
	}

	CBank(string name , string account, int balance){

		this->name = name;
		this->account = account;
		this->balance = balance;
		cout << "\n����" << endl;
	}

	void deposit() {

		int money;
		cout << "�Ա� �ݾ� : ";
		cin >> money;

		balance += money;
	}
	void withdraw() {

		int money;
		cout << "��� �ݾ� : ";
		cin >> money;

		balance -= money;
	}
	void refer() {
		cout << "\n������ : " << this->name << endl;
		cout << "���¹�ȣ : " << this->account << endl;
		cout << "�ܾ� : " << this->balance << endl;
	}

	void account_create() { // ���� ����

		string name_, account_no;
		int  balance_money = 0;

		cout << "\n�̸� : ";
		cin >> name_;
		cout << "���¹�ȣ : ";
		cin >> account_no;
		cout << "�Ա� �ݾ� : ";
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

	// �Ҹ���
	~CBank() {
		cout << this->account << " �Ҹ�" << endl;
		this->balance = -1;
	}
};
CBank* cb[10]; // ���� ������ ����
int CBank::cnt = 0; // ���� ��� ������ �ʱⰪ�� �̷��� �ش�*****

int search() {

	string account_no;
	cout << "\n���¹�ȣ : ";
	cin >> account_no;

	// ���� ��ȸ (ã�� ��, delete)
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

		cout << "\n1. ���»��� " << endl;
		cout << "2. �Ա�" << endl;
		cout << "3. ��� " << endl;
		cout << "4. �ܾ���ȸ" << endl;
		cout << "5. ��������" << endl;
		cout << "6. ��ü ������ȸ" << endl;
		cout << "0. ����" << endl;
		cout << " �޴� ���� ==> ";

		cin >> menu;

		int tmp_cnt = 0;
		int se_loc;

		switch (menu) {

			case 1: 
				tmp_cnt = CBank::getCnt();
				cb[tmp_cnt] = new CBank(); // �߰��߰� ������ �����ؾ��ϴ� ���� �Ҵ�
				cb[tmp_cnt]->account_create(); break; 
			
			case 2: // �Ա�
				se_loc = search();
				if (se_loc != -1) {
					cb[se_loc]->deposit();
				}
				else {
					cout << "���¹�ȣ ����" << endl;
				}
				break;

			case 3: // ���
				se_loc = search();
				if (se_loc != -1) {
					cb[se_loc]->withdraw();
				}
				else {
					cout << "���¹�ȣ ����" << endl;
				}
				 break;

			case 4: // ��ȸ
				se_loc = search();
				if (se_loc != -1) {
					cb[se_loc]->refer();
				}
				else {
					cout << "���¹�ȣ ����" << endl;
				}
				 break;

			case 5: 
				se_loc = search();
				if (se_loc != -1) {
					cb[se_loc] = nullptr;
					delete cb[se_loc];
				}
				cout << "���¹�ȣ ����" << endl;			
				break;

			case 6:
				ALL_search(); break;

			case 0: return 0;
		}

	}

	return 0;
}

