#include <iostream>
using namespace std;

// ����ü ���� ���� ����� ���������� �ִ�!
struct Point {
	int x;
	int y;
};
int main() {

	Point point = { 1,2 };
	Point* Ppoint = &point;
	cout << "�� point�� ��ǥ�� (" << (*Ppoint).x << "," << (*Ppoint).y << ") �Դϴ�." << endl;
	// Ppoint�� ���� ���� x��, Ppoint�� ���� ���� y��

	cout << "�� point�� ��ǥ�� (" << Ppoint->x << "," << Ppoint->y << ") �Դϴ�." << endl;
}