#include <iostream>
#include<string>
using namespace std;

int main() {

	// ** ����(lambda)�� �̸� ���� �Լ�(�Լ����� ���� �Լ�)�̴� 
	auto campus = [](string x, string y) {
		cout << x + y << endl;
	};

	campus("�̸�", "���̽��Ͱ�");
	campus("�ѱ�", "���б�");

	return 0;
}
