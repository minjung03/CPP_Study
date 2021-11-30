#include<iostream>
#include<fstream>
using namespace std;

int main() {

	ifstream input("input.txt");

	if (input.fail()) {
		cout << "������ ���µ� ����" << endl;
		return 1;
	}

	input.seekg(0, ios::end);
	cout << (char)input.get() << endl;

	input.clear();

	input.seekg(5, ios::cur); // ���Ⱑ ������. �ƹ� ���� �ȳ���
	// C++�� ��Ʈ������ eofbit��� �÷��׸� ������ �ִµ�, ������ ���� �����ϰ� �� ���, �÷��װ� ������ �ȴ�.
	// �� �÷��װ� ���� �������� ������� �۵����� �ʴ´�.
	// => �̸� �����ϴ� ���� clear()
	cout << (char)input.get() << endl;

	input.close();
}