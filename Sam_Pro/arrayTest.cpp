#include<iostream>
using namespace std;

int main() {

	short nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	short* pArray = nullptr;
	cout << pArray << endl;
	
	// *(parray+i) �� *parray+i �� �ٸ���!!*** 1.�迭 �� ���  2. �迭 ���� +i �ؼ� ���
	// ���ݲ� �����Ѱ� �� �����ϱ�, ����ð��� �ʿ��� �� ����**

	pArray = nArray;
	cout << pArray << endl;

	// ���蹮�� ����
	pArray++;
	cout << pArray << endl;  //short Ÿ���̴� 2����Ʈ ���� (int�� 4����Ʈ ����)
	pArray += 2; // 4����Ʈ ���� (int�̸� 8����Ʈ ����)

	//int nArray[] = { 0,1,2,3,4,5,6,7,8,9 };
	//int* pArray = nullptr;
	//pArray = nArray;  	// nArray = pArray; <- ���� : �迭�� �ּҰ��� ���� �Ұ���
	//cout << *pArray <<", " << nArray[0] << endl;  // 0, 0

	//*pArray = 10;  // nArray[0] ���� 10���� �ٲ��.
	//cout << *pArray << ", " << nArray[0] << endl;  // 10, 10

	//pArray = &nArray[1];
	//cout << *pArray << ", " << nArray[1] << endl;  // 1, 1

	//// �Ʒ��鵵 ���蹮�� ���� �� ����. �� �˾Ƶα�!!
	//cout << sizeof(pArray) << endl;  // 4  **�ּҰ��� ���̳�**(x86�� 4, x64�� 8 / ������ �� ����Ҳ���)
	//cout << sizeof(*pArray) << endl;  // 4    ������ʹ� x64�� �ٲ۴ٰ� 8 �ȳ���**
	//cout << sizeof(nArray) << endl;  // 40


	///*int count = sizeof(nArray) / sizeof(int);

	//for (int i = 0; i < count ; i++) {
	//	cout << i << " : " << nArray[i] << endl;
	//}
	//cout << sizeof(nArray) << endl;*/

	return 0;
}