
#define _CRT_SECURE_NO_WARNINGS  
// �� ���� ������. stanf�� �̰� �Ⱦ��� �ȵ� �� ����

#include<iostream>
using namespace std;

int main() {

	// char �� ���� ��������!! const �� ���ֱ�
	const char* a = "Mirim School"; 
	const char* b = "Mirim Program";

	cout << strlen(a) << endl; //12
	cout << strlen(b) << endl; //13

	char c[10];
    strcpy(c,"My Home");
	cout << c << endl;

	cout << strcmp(a, b) << endl; // 1 (a�� �� ũ��)
	// �����̶��� ����!
	return 0;
}