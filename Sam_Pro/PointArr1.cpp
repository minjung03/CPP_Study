#include<iostream>
using namespace std;

class Point {

public:

	int x, y;

public:

	Point() {
		cout << "�⺻ ������" << endl;
	};
	~Point() {
		cout << "(" << x << "," << y << ")" << "��ü �Ҹ�" << endl;
	}
}; // �� �����ݷ� ���̱�**

int main() {

	Point arr[5]; // ��ü �迭
	// �������� �迭 ���·� ���� �� �ִ�.

	for (int i = 0; i < 5; i++) {
		cin >> arr[i].x;
		cin >> arr[i].y;
	}

	return 0;
}