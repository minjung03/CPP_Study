#include <iostream>
using namespace std;


int sum(int, int) ;// ������ Ÿ���� ������ �Ƚᵵ �������

// ����Ʈ �Ű�����
int sum(int a = 2, int b = 3, int c = 4, int d = 5) {// �Ű������� 1�� ���� �� �˾Ƽ� ���� ��ü
	return a + b + c + d;
}
//int sum(){
//	return 0;
//}
int main() {

	// �ᱹ sum �Լ��� 4�� ����ų� �ٸ�����(���� ������ �����ε�)
	cout << sum(2, 3, 5,7) << endl;
	cout << sum(2, 3, 5) << endl;
	cout << sum(3) << endl; 
	
	//cout << sum() << endl; ���� : �� �� �ִ� ���� 2����

	// (int a = 2, int b = 3, int c, int d) �� ����
	// ���� �ʺ��� ä���� �Ѵ�!

	return 0;
}

int sum(int a, int b) {
	return a + b;
}
