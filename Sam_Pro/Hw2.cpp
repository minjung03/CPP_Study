#include <iostream>
using namespace std;

int main() {

	cout << "�Ͻ�Ʈ�ռ� : ";
	// �� �ڸ��� ���� ��, �� �ڸ����� �� �����Ͽ� ���� ���� �ڽ��� ���� ��

	for (int i = 100; i <= 999; i++) {

		int num = pow(i / 100, 3) + pow((i % 100) / 10, 3) + pow(i % 10, 3);
		// c/c++�� ���� �Լ� 'pow(������ �� , ���� Ƚ��)'  
		// pow()�Լ��� double Ÿ�� ** �����ϱ�

		if (i == num) {
			cout << i << " ";
		}

	}
		
}
