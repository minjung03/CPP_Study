#include<iostream>
#include<cstdlib>
using namespace std;

void print(int a, int b) {
	std::cout << a + b << std::endl; 
}

int main() {

	char str[] = "100";
	int a = 200;
	int b = atoi(str); // atoi �� string�� Interger�� ��ȯ (���ڷ� �ٲٴ� �Լ�)
	print(a, b);
}