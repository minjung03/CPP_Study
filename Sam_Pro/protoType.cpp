#include<iostream>
using namespace std;

//// �Լ� ������ main() �Ʒ������� ����
//void a();  // prototype �̶� �θ���. �����⸸ ��������
//
//int main() {
//	a();
//}
//
//void a() {
//	
//		cout << "test" << endl;
//	
//}



//�� ���� ������, �Լ��� �θ��µ� �ΰ����� �ð��� ���� �ʴ´�.
// #define a(val) (val) * (val) // ��ó�� ��ũ��, ������ �� ��ü
inline int a(int val) {  // �ζ���(inline) �Լ� , ������ �� ��ü

	return val * val;
}

int main(void) {
	cout << a(3+2) << endl;
	// cout << 3+2 * 3+2 << endl; �� ������ �Ǿ������.
	// cout << (3+2) * (3+2) << endl; �� val�� ���θ� ����� ����� ����!
}
