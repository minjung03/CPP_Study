#include<iostream>
using namespace std;


int same = 2;
int global = 2;

int main() {

	int same = 3;
	cout << "���� ������� 2�� ���� ������� 3�� ����մϴ�." << endl;
	cout << "���� same" << same << endl;

	cout << "���� global" << global << endl;

	return 0;
}