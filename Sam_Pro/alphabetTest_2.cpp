#include <iostream>
using namespace std;

// a,A�� 1���� �����ϴ� ���α׷�
int main() {

	char ap;
	
	// ���ĺ��� �ƴϾ��� �� ó������ ���ֱ� (�⺻������ ����!)

	cout << "A(a)�� 1���� �����մϴ�." << endl;
	cout <<  "���ĺ� �Է� : " ;
	cin >> ap;

	//���� ���α׷��̶� ������ ���� �Ѵ��� �˾ƺ� �� �ִ� ���α׷�**
	// cout << toupper(ap) << endl;  // �빮�ڷ� �ٲ������ �Լ� toupper()  �̷��� �Լ��� ����ϸ� �ξ� ����������!
	// isalpha() ���ĺ��̳� ����� �Լ�, �̰� ����ϰ� ������ toupper() ����� 'A'����+1 �ƴϸ� ���� ���  -> ���α׷��� ��û ����������.

	if (isupper(ap)) {  // �빮�� ����� �Լ� isupper()
		
		cout << ap - 'A' + 1 << endl;
	}
	else if(islower(ap)) {   //  �ҹ��ڴ� ����� �Լ� islower()

		cout << ap - 'a' + 1 << endl;
	}
	else {
		cout << "���ĺ��� �ƴմϴ�.";
	}

}