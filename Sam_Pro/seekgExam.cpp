#include<iostream>
#include<fstream>
using namespace std;

int main() {

	ifstream input("input.txt");

	if (input.fail()) {
		cout << "������ ���� �� ����" << endl;
		return 1;
	}

	input.seekg(-1, ios::end);
	cout << (char)input.peek();

	input.seekg(0, ios::beg);
	cout << (char)input.peek();

	input.seekg(7, ios::cur);
	cout << (char)input.peek();

	input.seekg(5);
	cout << (char)input.peek() << endl;



	input.seekg(-1, ios::end);
	cout << (char)input.get();

	input.seekg(0, ios::beg);
	cout << (char)input.get();

	input.seekg(7, ios::cur); // i �� �Ǿ��ִ�
	cout << (char)input.get();

	input.seekg(5);
	cout << (char)input.get() << endl;




	return 0;
}