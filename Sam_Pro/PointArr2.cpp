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

	Point *arr[5];

	for (int i = 0; i < 5; i++) {
		arr[i] = new Point(); 
	}
	for (int i = 0; i < 5; i++) {

		cin >> arr[i]->x; // �������̴� .�� �ƴ� ->�� ���� (�Ǵ� (*arr[i])->x )
		cin >> arr[i]->y; // ���̰� ���� �� ���� �� ������ ���� ����Ѵ�. (Ư�� ���� ��)
	}
	for (int i = 0; i < 5; i++) {
		delete arr[i]; // �Ҹ��ڿ� �޸� ������� ����
	}

	return 0;
}