#include <iostream>
using namespace std;


int main() {

	int* ptr = nullptr;
	int arr[4] = { 1,2,3,4 };
	ptr = arr;

	for (int i = 0; i < 4; i++) {
		cout << arr[i] << " ";

	}
	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << *(ptr + i) << " ";
	}
	cout << endl;


	for (int i = 0; i < 4; i++) {
		cout << *(arr+i) << " ";  //�迭�� ������ó�� ��� ����
	}
	cout << endl;

	for (int i = 0; i < 4; i++) {
		cout << ptr[i] << " ";  // �����͵� �迭ó�� ��� ����
	}
	cout << endl;

	cout << ptr << endl;
	ptr++; // �����ʹ� �ּ� ���� ���� �� �ִ�.
	cout << *(ptr) << endl;
	cout << ptr << endl;



	cout << arr << endl;
	arr++; // ���� : �迭�� �������� ������ . �迭�� ������ �ּ� ���� ���� �� ����.
	cout << *(arr) << endl;
	cout << arr << endl;

	return 0;
}