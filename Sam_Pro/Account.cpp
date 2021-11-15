#include<iostream>
using namespace std;

//����
struct Account {

	// ��� ����
	char accID[20]; // ���¹�ȣ
	char secID[20]; // ��й�ȣ
	char name[20];  // �̸�
	int balance; // �ܾ�

	void Deposit(int money);
	void Withdraw(int money);
	void print();

};
void Account::Deposit(int money) { // ������Ÿ���� ���. �ؿ� �ᵵ �������.
	balance += money;
	print();
}
void Account::Withdraw(int money) {
	balance -= money;
	print();
}
/* C������ ��� : �Ű������� �Ҽ��� ��Ÿ����
void Deposit(Account &acc, int money) { // �� ���� ���۷���(call by reference)
	acc.balance += money; // mirim ���¿� ���� balance�̴� mirim�� �Ѿ�� acc�� �տ� ���´�.
}
void Withdraw(Account& acc, int money) { 
	acc.balance -= money;
}
*/
int main() {

	Account mirim = { "1234","1357","������",1000 };

	/* C������ ���
	Deposit(mirim, 100); // �Աݽ�Ű�� �Լ�
	cout << "�ܾ� : " << mirim.balance << endl;

	Withdraw(mirim, 300); // ��ݽ�Ű�� �Լ�
	cout << "�ܾ� : " << mirim.balance << endl;

	// �ܾ��� ������ �ʴ´� ��? �Ű������� �ѱ�� ����� "�� ���� ���"�� ���� �� ������ �ͼ� ���������� ���� �ٲ����� �ʴ´�.
	// �� ���� �����ͳ� ���۷����� �ٲ������.(���۷����� ����)
	*/

	mirim.Deposit(100);
	mirim.Withdraw(300);
 
	return 0;

}
void Account::print() {

	cout << "���¹�ȣ : " << accID << endl;
	cout << "��й�ȣ : " << secID << endl;
	cout << "�̸� : " << name << endl;
	cout << "�ܾ� : " << balance << endl;
}

// �� ���� ������ ���
/*
void Deposit(Account* acc, int money) {
	(*acc).balance += money; 
}
void Withdraw(Account* acc, int money) {
	acc->balance -= money;
}

Deposit(&mirim, 100); // �Աݽ�Ű�� �Լ�
cout << "�ܾ� : " << mirim.balance << endl;

Withdraw(&mirim, 300); // ��ݽ�Ű�� �Լ�
*/