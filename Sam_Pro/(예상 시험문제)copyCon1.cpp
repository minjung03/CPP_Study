#include<iostream>
using namespace std;

class AAA {

public:
	AAA() {
		cout << "AAA ȣ��" << endl;

	}
	AAA(int i) {
		cout << "AAA(int i) ȣ��" << endl;
	}

	AAA(const AAA& a) { // &�� �Ⱦ��� ��������ڰ� �߸��ȴ� �������. �� const �� & �� ����
		// �̷������� ���蹮�� �����⵵ ��**
		cout << "AAA(const AAA& a) ȣ��" << endl;
	}
	void ShowData() {
		cout << "ShowData()" << endl;
	}
};

void function(AAA a) { // �Ű������� ���� a�� &�� ��� ���� ��������� �ȴ�. AAA(const AAA& a)�� �ٽ� ȣ��
	a.ShowData();	   // AAA& a�� �ȴٸ� �ѹ� �� ȣ������ �ʴ´�. �������� ���� �ٰԵǴ�.
};

int main(void) {
	AAA obj1;
	AAA obj2(10);
	AAA obj3(obj2);
	function(obj1);
}