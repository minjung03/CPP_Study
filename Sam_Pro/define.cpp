#include<iostream>
using namespace std;
#define Mul(a,b) (a)*(b)  // a*b ��� �ۼ��ϸ� 2+1*3+4 �� ��ü�ȴ�(�״��) => 9

/* //�Լ��� ����ϸ� ���� �ɸ���.
int mul(int a, int b) {

	return a * b;
}
*/

int main() {
	cout << Mul(2+1,3+4) << endl;

}