#include<iostream>
using namespace std;

#define multiple_define(A) ((A)*(A))
int multiple_inline(int A);  // ���⿡�� inline�� ���̴� �ƴϴ� ��� ����!

int main() {

	int a = 3;
	cout << "inline �Լ��� ����" << multiple_inline(++a) << endl;// 16

    a = 3;
	cout << "define �Լ��� ����" << multiple_define(++a) << endl; //25
	                                //((++a)*(++a)) �� ��ü �ȴ� 

}
inline int multiple_inline(int A) {
	// �� ��¥�� ������ �Լ��� inline���� �ۼ�!
	return A * A; // 4*4
}