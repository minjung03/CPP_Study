#include<iostream>
using namespace std;

int main() {

	char cMaxVal = 0x7f;
	unsigned char ucMaxVal = 0xFF;

	cout << "char�� ����(1����Ʈ) : "
		<< (int)(char)(cMaxVal + 1) << "~"   // �ִ밪 +1�� �ϸ� �ּҰ�  , �ּҰ��� -1�� �ϸ� �ִ밪
		<< (int)cMaxVal << endl;

	cout << "unsigned char�� ����(1����Ʈ) : "
		<< (int)(char)(ucMaxVal + 1) << "~"    // �ִ밪 +1�� �ϸ� �ּҰ�  , �ּҰ��� -1�� �ϸ� �ִ밪
		<< (int)ucMaxVal << endl;
}