#include <iostream>
using namespace std;

int main() {

	srand((unsigned)time(0));  // ���� �ݵ�� �־���Ѵ�!!!(for�� ��!!)

	for (int i = 0; i < 100; i++) {

		cout << i + 1 << " : " << rand() %6 + 5 << endl; 

		// ���� ���� �����ϴ¹� :: rand() % b + a --> ���� : a ~ (b-1+a)

		// ��ǻ�Ͱ� ���� ������ ���� ���߱� ���α׷�, �߱� ���� � ���δ�.
		
		// < ������ ���� > ������ �� �ݵ�� ������ �ܿ���
		// 12 ~ 50 ���� �������ض� --> rand() % 39 + 12
		// 1. ������ �� ���� 0���� �ٲ�� 50 - 12 = 38 , 0 ~ 38 
		// 2. �׸��� �ڿ� +1, < 39 >
		

		// srand() ������ ������ �� - ��� �Ȱ��� ���ڸ� ���´�.
		// �ֳ�, rand()�� �⺻������ ���� �ð��� ������ ����Ѵ�. 
		// srand()���� ���� �ð��� �����;��ϴµ� ������ ��� �׷���.
	}
}